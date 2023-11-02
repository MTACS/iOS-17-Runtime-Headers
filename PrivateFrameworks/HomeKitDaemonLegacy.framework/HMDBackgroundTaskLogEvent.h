
@interface HMDBackgroundTaskLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _didFire;
    double  _fireDelay;
    double  _scheduledToExpectedFireInterval;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didFire;
@property (nonatomic, readonly) double fireDelay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) double scheduledToExpectedFireInterval;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)description;
- (bool)didFire;
- (double)fireDelay;
- (id)initWithTask:(id)arg1 didFire:(bool)arg2 now:(id)arg3;
- (double)scheduledToExpectedFireInterval;

@end
