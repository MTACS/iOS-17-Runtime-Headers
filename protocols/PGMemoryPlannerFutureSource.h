
@protocol PGMemoryPlannerFutureSource <NSObject>

@required

- (NSArray *)futureMemoriesForConfiguration:(PGMemoryElectorConfiguration *)arg1 withGraph:(PGGraph *)arg2 progressReporter:(MAProgressReporter *)arg3;

@end
