
@interface REMAppStoreDataViewConfigurationsInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    unsigned long long  _createdOrCompletedRemindersCountThreshold;
    unsigned long long  _numberOfForegroundsThreshold;
    double  _timeIntervalOfInterest;
    double  _timeIntervalSinceInitialForeground;
    double  _timeIntervalSinceLastFetch;
    double  _timeIntervalSinceLastPrompt;
}

@property (nonatomic, readonly) unsigned long long createdOrCompletedRemindersCountThreshold;
@property (nonatomic, readonly) unsigned long long numberOfForegroundsThreshold;
@property (nonatomic, readonly) double timeIntervalOfInterest;
@property (nonatomic, readonly) double timeIntervalSinceInitialForeground;
@property (nonatomic, readonly) double timeIntervalSinceLastFetch;
@property (nonatomic, readonly) double timeIntervalSinceLastPrompt;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)createdOrCompletedRemindersCountThreshold;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreatedOrCompletedRemindersCountThreshold:(unsigned long long)arg1 numberOfForegroundsThreshold:(unsigned long long)arg2 timeIntervalOfInterest:(double)arg3 timeIntervalSinceInitialForeground:(double)arg4 timeIntervalSinceLastPrompt:(double)arg5 timeIntervalSinceLastFetch:(double)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfForegroundsThreshold;
- (double)timeIntervalOfInterest;
- (double)timeIntervalSinceInitialForeground;
- (double)timeIntervalSinceLastFetch;
- (double)timeIntervalSinceLastPrompt;

@end
