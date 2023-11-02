
@interface WBSCyclerIterationCounter : NSObject {
    unsigned long long  _iterationCount;
    unsigned long long  _maximumIterationCount;
}

@property (nonatomic, readonly) bool hasReachedMaximumIterationCount;
@property (nonatomic, readonly) unsigned long long iterationCount;
@property (nonatomic, readonly) unsigned long long maximumIterationCount;

- (bool)hasReachedMaximumIterationCount;
- (void)incrementIterationCount;
- (id)init;
- (id)initWithMaximumIterationCount:(unsigned long long)arg1;
- (unsigned long long)iterationCount;
- (unsigned long long)maximumIterationCount;

@end
