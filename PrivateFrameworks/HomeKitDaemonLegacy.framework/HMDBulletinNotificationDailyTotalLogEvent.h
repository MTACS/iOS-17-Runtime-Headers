
@interface HMDBulletinNotificationDailyTotalLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _bulletinNotificationSettings;
    NSString * _topic;
    unsigned long long  _topicCount;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) unsigned long long bulletinNotificationSettings;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *topic;
@property (readonly) unsigned long long topicCount;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (unsigned long long)bulletinNotificationSettings;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithTopic:(id)arg1 countForTopic:(unsigned long long)arg2 userNotificationSettings:(id)arg3;
- (id)topic;
- (unsigned long long)topicCount;

@end
