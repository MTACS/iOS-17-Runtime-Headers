
@interface HMDXPCActivityRunReportLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    long long  _activityDefinedIntervalInMinutes;
    NSString * _activityName;
    long long  _activityRunHourOfDay;
    bool  _activityShouldWake;
    long long  _activityTimeSinceLastRunInMinutes;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly) long long activityDefinedIntervalInMinutes;
@property (nonatomic, readonly) NSString *activityName;
@property (nonatomic, readonly) long long activityRunHourOfDay;
@property (nonatomic, readonly) bool activityShouldWake;
@property (nonatomic, readonly) long long activityTimeSinceLastRunInMinutes;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)activityDefinedIntervalInMinutes;
- (id)activityName;
- (long long)activityRunHourOfDay;
- (bool)activityShouldWake;
- (long long)activityTimeSinceLastRunInMinutes;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithActivityName:(id)arg1 definedInterval:(double)arg2 activityShouldWake:(bool)arg3 timeSinceLastRun:(double)arg4;

@end
