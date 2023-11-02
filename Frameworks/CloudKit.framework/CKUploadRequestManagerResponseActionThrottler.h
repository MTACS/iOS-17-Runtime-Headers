
@interface CKUploadRequestManagerResponseActionThrottler : NSObject {
    NSSet * _actionsToThrottle;
    double  _maximumThrottleTime;
    double  _minimumRetryTime;
    long long  _minimumThrottleCount;
    double  _minimumThrottleTime;
    NSMutableDictionary * _responseActionToMetadata;
    double  _throttlePeriod;
}

@property (copy) NSSet *actionsToThrottle;
@property double maximumThrottleTime;
@property double minimumRetryTime;
@property long long minimumThrottleCount;
@property double minimumThrottleTime;
@property (nonatomic, retain) NSMutableDictionary *responseActionToMetadata;
@property double throttlePeriod;

+ (double)currentTime;
+ (void)sleep:(double)arg1;

- (void).cxx_destruct;
- (id)actionsToThrottle;
- (void)gateResponseAction:(long long)arg1 isRetry:(bool)arg2;
- (void)gateResponseAction:(long long)arg1 isRetry:(bool)arg2 currentTime:(double)arg3;
- (id)init;
- (double)maximumThrottleTime;
- (double)minimumRetryTime;
- (long long)minimumThrottleCount;
- (double)minimumThrottleTime;
- (id)responseActionToMetadata;
- (void)setActionsToThrottle:(id)arg1;
- (void)setMaximumThrottleTime:(double)arg1;
- (void)setMinimumRetryTime:(double)arg1;
- (void)setMinimumThrottleCount:(long long)arg1;
- (void)setMinimumThrottleTime:(double)arg1;
- (void)setResponseActionToMetadata:(id)arg1;
- (void)setThrottlePeriod:(double)arg1;
- (double)throttlePeriod;
- (double)throttleTimeForCount:(long long)arg1 isRetry:(bool)arg2;
- (unsigned long long)totalThrottleCountForAction:(long long)arg1;

@end
