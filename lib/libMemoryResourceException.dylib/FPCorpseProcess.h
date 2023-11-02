
@interface FPCorpseProcess : FPUserProcess

- (void)_gatherIdleExitStatus;
- (bool)_isAlive;
- (bool)_populateTask;

@end
