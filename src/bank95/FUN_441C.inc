
SECTION "441C", ROMX[$441C], BANK[95]

; `$441C | Bank:95`
;
; 
FUN_95_441C:
	ld a,[wUNK_START_1_3]
	rst $00

dw .jmp0

.jmp0:
	ld a,[wUNK_START_1_4]
	rst $00

dw .jmp0_0

.jmp0_0:
	ld a,2
;	call FUN_1C89

	call wait_7000

	xor a
	ld hl,$9800
	ld bc,$0400
	call mem_fill

	xor a
	ld hl,$C0D8
	ld bc,$0028
	call mem_fill

	ld de,$560E
	ld bc,$9000
;	call FUN_14CF

	ld de,$669D
	ld hl,$9800
;	call FUN_95_4263

	ld a,0
	ld [wUNK_95_441C_1],a
	ld hl,$170B
	rst $10

	ld de,$3F00
	ld a,1
	ldh [rVBK],a
	ld hl,$9800

	ld a,[IsGBC]
	or a
;	call nz,FUN_14CF

	ld a,0
	ldh [rVBK],a
	ret