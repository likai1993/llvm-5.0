bool X86AsmPrinter::mem_access_check(const MachineInstr *MI)
{
    unsigned op_code = MI->getOpcode();
    switch (op_code) {
         // Move Instructions.
    case X86::MOV8rr:
    case X86::MOV16rr:
    case X86::MOV32rr:
    case X86::MOV64rr:
        return true;
      break;
    case X86::MOV8ri:
    case X86::MOV16ri:
    case X86::MOV32ri:
    case X86::MOV64ri32:
      return true;
      break;
    case X86::MOV8mi:
    case X86::MOV16mi:
    case X86::MOV32mi:
    case X86::MOV64mi32:
      return true;
      break;
    case X86::MOV8ao32:
    case X86::MOV16ao32:
    case X86::MOV32ao32:
    case X86::MOV64ao32:
    case X86::MOV8ao16:
    case X86::MOV16ao16:
    case X86::MOV32ao16:
      return true;
      break;
    case X86::MOV8o32a:
    case X86::MOV16o32a:
    case X86::MOV32o32a:
    case X86::MOV64o32a:
    case X86::MOV8o16a:
    case X86::MOV16o16a:
    case X86::MOV32o16a:
      return true;
      break;
    case X86::MOV8ao64:
    case X86::MOV16ao64:
    case X86::MOV32ao64:
    case X86::MOV64ao64:
      return true;
      break;
    case X86::MOV8o64a:
    case X86::MOV16o64a:
    case X86::MOV32o64a:
    case X86::MOV64o64a:
      return true;
      break;
    case X86::MOV8rr_REV:
    case X86::MOV16rr_REV:
    case X86::MOV32rr_REV:
    case X86::MOV64rr_REV:
      return true;
      break;
    case X86::MOV8rm:
    case X86::MOV16rm:
    case X86::MOV32rm:
    case X86::MOV64rm:
      return true;
      break;
    case X86::MOV8mr:
    case X86::MOV16mr:
    case X86::MOV32mr:
    case X86::MOV64mr:
      return true;
      break;
    case X86::MOVSX16rr8:
    case X86::MOVSX32rr16:
    case X86::MOVSX32rr8:
    case X86::MOVSX64rr16:
    case X86::MOVSX64rr32:
    case X86::MOVSX64rr8:
      return true;
      break;
    case X86::MOVSX16rm8:
    case X86::MOVSX32rm16:
    case X86::MOVSX32rm8:
    case X86::MOVSX64rm16:
    case X86::MOVSX64rm32:
    case X86::MOVSX64rm8:
      return true;
      break;
    case X86::MOVSDrm:
    case X86::MOVSSrm:
      return true;
      break;
    case X86::MOVSDmr:
    case X86::MOVSSmr:
      return true;
      break;
    // store
    case X86::G_STORE:
    case X86::EH_RESTORE:
    case X86::XSTORE:
      return true;
      break;
    // load 
    case X86::LOAD_STACK_GUARD:
    case X86::G_LOAD:
    case X86::VMLOAD32:
    case X86::VMLOAD64:
       return true;
       break;
    default:
       return false;
   }
}
