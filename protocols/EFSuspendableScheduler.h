
@protocol EFSuspendableScheduler <EFScheduler>

@required

- (void)resume;
- (void)suspend;

@end
