
@interface HMDCounterThresholdLoggingTrigger : NSObject <HMMCounterObserver> {
    NSString * _counterName;
    <HMDEWSLogging> * _ewsLogger;
    long long  _threshold;
    bool  _uploadImmediately;
}

@property (nonatomic, readonly) NSString *counterName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDEWSLogging> *ewsLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long threshold;
@property (nonatomic, readonly) bool uploadImmediately;

- (void).cxx_destruct;
- (id)counterName;
- (id)ewsLogger;
- (id)initWithThreshold:(long long)arg1 counterName:(id)arg2 ewsLogger:(id)arg3;
- (id)initWithThreshold:(long long)arg1 counterName:(id)arg2 uploadImmediately:(bool)arg3 ewsLogger:(id)arg4;
- (void)logThresholdTrigger:(id)arg1 triggerValue:(unsigned long long)arg2;
- (long long)threshold;
- (void)updatedCounter:(id)arg1 fromOldValue:(long long)arg2 toNewValue:(long long)arg3;
- (bool)uploadImmediately;

@end
