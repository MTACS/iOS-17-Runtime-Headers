
@protocol PGMemoryPlannerPastSource <NSObject>

@required

- (NSArray *)memoriesToAvoidForConfiguration:(PGMemoryElectorConfiguration *)arg1 withGraph:(PGGraph *)arg2 progressReporter:(MAProgressReporter *)arg3;
- (NSArray *)pastMemoriesForConfiguration:(PGMemoryElectorConfiguration *)arg1 withGraph:(PGGraph *)arg2 progressReporter:(MAProgressReporter *)arg3;

@end
