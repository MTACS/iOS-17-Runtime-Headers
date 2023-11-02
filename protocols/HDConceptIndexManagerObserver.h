
@protocol HDConceptIndexManagerObserver <NSObject>

@required

- (void)conceptIndexManagerDidBecomeQuiescent:(HDConceptIndexManager *)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;

@end
