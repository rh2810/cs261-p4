/*
 * CS 261 PA4: Mini-ELF interpreter
 *
 * Name: 
 */

#include "p4-interp.h"

/**********************************************************************
 *                         REQUIRED FUNCTIONS
 *********************************************************************/

y86_register_t decode_execute (y86_t *cpu, bool *cond, y86_inst_t inst,
        y86_register_t *valA)
{
    y86_register_t valE = 0;

    return valE;
}

void memory_wb_pc (y86_t *cpu, memory_t memory, bool cond, y86_inst_t inst,
        y86_register_t valE, y86_register_t valA)
{
}

/**********************************************************************
 *                         OPTIONAL FUNCTIONS
 *********************************************************************/

void usage_p4 ()
{
    printf("Usage: y86 <option(s)> mini-elf-file\n");
    printf(" Options are:\n");
    printf("  -h      Display usage\n");
    printf("  -H      Show the Mini-ELF header\n");
    printf("  -a      Show all with brief memory\n");
    printf("  -f      Show all with full memory\n");
    printf("  -s      Show the program headers\n");
    printf("  -m      Show the memory contents (brief)\n");
    printf("  -M      Show the memory contents (full)\n");
    printf("  -d      Disassemble code contents\n");
    printf("  -D      Disassemble data contents\n");
    printf("  -e      Execute program\n");
    printf("  -E      Execute program (debug trace mode)\n");
}

bool parse_command_line_p4 (int argc, char **argv,
        bool *header, bool *segments, bool *membrief, bool *memfull,
        bool *disas_code, bool *disas_data,
        bool *exec_normal, bool *exec_debug, char **file)
{
    return true;
}

void dump_cpu_state (y86_t cpu)
{
}

