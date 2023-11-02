
@interface SiriInvocationAnalytics.AggregatedStats : NSObject {
    void intendedRequestCount;
    void intendedRequestRatio;
    void modelVersion;
    void requestCount;
    void triggeredMechanism;
    void triggeredMechanismRequestRatio;
    void unintendedRequestCount;
}

@property (nonatomic) long long intendedRequestCount;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long triggeredMechanism;
@property (nonatomic) double triggeredMechanismRequestRatio;
@property (nonatomic) long long unintendedRequestCount;

- (void).cxx_destruct;
- (id)init;
- (long long)intendedRequestCount;
- (double)intendedRequestRatio;
- (id)modelVersion;
- (long long)requestCount;
- (void)setIntendedRequestCount:(long long)arg1;
- (void)setIntendedRequestRatio:(double)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setRequestCount:(long long)arg1;
- (void)setTriggeredMechanism:(long long)arg1;
- (void)setTriggeredMechanismRequestRatio:(double)arg1;
- (void)setUnintendedRequestCount:(long long)arg1;
- (long long)triggeredMechanism;
- (double)triggeredMechanismRequestRatio;
- (long long)unintendedRequestCount;

@end
