
@interface HMDCounterRateLoggingTrigger : NSObject <HMMCounterObserver> {
    NSString * _counterName;
    <HMDEWSLogging> * _ewsLogger;
    unsigned long long * _intervalCounts;
    long long  _intervalSize;
    unsigned long long  _lastUpdatedInterval;
    unsigned long long  _maxWindowCount;
    id /* block */  _timeSourceBlock;
    bool  _uploadImmediately;
    unsigned long long  _windowCount;
    long long  _windowSize;
    long long  _windowThreshold;
}

@property (nonatomic, readonly) NSString *counterName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDEWSLogging> *ewsLogger;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long*intervalCounts;
@property (nonatomic, readonly) long long intervalSize;
@property (nonatomic) unsigned long long lastUpdatedInterval;
@property (nonatomic) unsigned long long maxWindowCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ timeSourceBlock;
@property (nonatomic, readonly) bool uploadImmediately;
@property (nonatomic) unsigned long long windowCount;
@property (nonatomic, readonly) long long windowSize;
@property (nonatomic, readonly) long long windowThreshold;

- (void).cxx_destruct;
- (id)counterName;
- (void)dealloc;
- (id)ewsLogger;
- (id)initWithThreshold:(long long)arg1 windowSize:(long long)arg2 counterName:(id)arg3 ewsLogger:(id)arg4;
- (id)initWithThreshold:(long long)arg1 windowSize:(long long)arg2 counterName:(id)arg3 uploadImmediately:(bool)arg4 ewsLogger:(id)arg5;
- (id)initWithThreshold:(long long)arg1 windowSize:(long long)arg2 counterName:(id)arg3 uploadImmediately:(bool)arg4 ewsLogger:(id)arg5 timeSourceBlock:(id /* block */)arg6;
- (unsigned long long*)intervalCounts;
- (long long)intervalSize;
- (unsigned long long)lastUpdatedInterval;
- (void)logRateTrigger:(id)arg1 triggerValue:(unsigned long long)arg2;
- (unsigned long long)maxWindowCount;
- (void)setIntervalCounts:(unsigned long long*)arg1;
- (void)setLastUpdatedInterval:(unsigned long long)arg1;
- (void)setMaxWindowCount:(unsigned long long)arg1;
- (void)setWindowCount:(unsigned long long)arg1;
- (id /* block */)timeSourceBlock;
- (void)updatedCounter:(id)arg1 fromOldValue:(long long)arg2 toNewValue:(long long)arg3;
- (bool)uploadImmediately;
- (unsigned long long)windowCount;
- (long long)windowSize;
- (long long)windowThreshold;

@end
