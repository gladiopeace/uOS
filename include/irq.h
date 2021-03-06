#ifndef IRQ_H
#define IRQ_H

#include <common.h>
#include <assembly.h>

#define IRQ_BASE 32
#define IRQ_AMOUNT 16

enum irq_vectors
{
IRQ0 = 0,
IRQ1, IRQ2, IRQ3, IRQ4, 
IRQ5, IRQ6, IRQ7, IRQ8,
IRQ9, IRQ10, IRQ11,IRQ12,
IRQ13, IRQ14, IRQ15
};

void irq_handler(struct registers * regs);
void register_irq_handler(unsigned int irq, void (*handler)(struct registers *));
void unregister_irq_handler(unsigned int irq);

#endif
