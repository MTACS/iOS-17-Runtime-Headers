
@interface PMRStopwatch : NSObject {
    unsigned long long  _coreAnimationTotalTime;
    NSString * _domain;
    unsigned long long  _maxSplitTimes;
    NSMutableArray * _splitTimeStack;
    NSMutableArray * _splitTimes;
    unsigned long long  _startTime;
}

@property unsigned long long coreAnimationTotalTime;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) unsigned long long maxSplitTimes;
@property (nonatomic, readonly) NSArray *splitTimes;
@property (nonatomic) unsigned long long startTime;

+ (void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 usingBlock:(id /* block */)arg3 onCompletion:(id /* block */)arg4;
+ (void)setSharedStopwatch:(id)arg1;
+ (id)sharedStopwatch;

- (void)_purgeOldestSplitTimeIfNeeded;
- (id)_subtreeDescription;
- (void)addSplit:(id)arg1;
- (void)beginTimingGroupForMethod:(SEL)arg1 inClass:(Class)arg2 comment:(id)arg3;
- (void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 currentIteration:(unsigned long long)arg3 usingBlock:(id /* block */)arg4 onCompletion:(id /* block */)arg5;
- (unsigned long long)coreAnimationTotalTime;
- (void)dealloc;
- (id)description;
- (id)descriptionWithFormat:(int)arg1 key:(id)arg2 comment:(id)arg3;
- (id)domain;
- (void)endTimingGroup;
- (id)formattedUserInfoForSplitTime:(id)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (void)logEvent:(id)arg1 comment:(id)arg2;
- (void)logEvent:(id)arg1 comment:(id)arg2 userInfo:(id)arg3;
- (void)logToLocation:(id)arg1 key:(id)arg2;
- (void)logWithFormat:(int)arg1;
- (unsigned long long)maxSplitTimes;
- (void)reset;
- (void)setCoreAnimationTotalTime:(unsigned long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setMaxSplitTimes:(unsigned long long)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (id)splitTimes;
- (unsigned long long)startTime;
- (void)writeToFile:(id)arg1 key:(id)arg2 comment:(id)arg3 fileFormat:(int)arg4;

@end
