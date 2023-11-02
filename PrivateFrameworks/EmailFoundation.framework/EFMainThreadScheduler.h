
@interface EFMainThreadScheduler : EFQueueScheduler

- (id)init;
- (bool)prefersImmediateExecution;

@end
