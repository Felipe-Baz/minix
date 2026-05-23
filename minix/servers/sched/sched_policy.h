/* Política de escalonamento do servidor SCHED (projeto SO - UNIFESP).
 *
 * SCHED_POLICY_RR: Round-Robin puro para processos de usuário — mesma
 * prioridade (fila USER_Q), quantum fixo, sem demotion nem aging.
 */
#ifndef SCHED_POLICY_H
#define SCHED_POLICY_H

#include <minix/config.h>

#define SCHED_POLICY_RR		1

/* Fila única para todos os processos de usuário sob RR. */
#define RR_USER_PRIORITY	USER_Q

/* Quantum padrão (ms); alinhado a USER_QUANTUM em config.h. */
#define RR_DEFAULT_QUANTUM_MS	200

#endif /* SCHED_POLICY_H */
