
@interface SATaskStateInTransition : SATaskState {
    unsigned long long  _transitionType;
}

- (id)initWithKCDataTransitioningTask:(const struct transitioning_task_snapshot { unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; BOOL x5[32]; }*)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 andDonatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8;
- (unsigned long long)transitionType;

@end
