
@interface HMDMessageHandlerFailureMetricEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _messageName;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSString *messageName;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithFailureType:(unsigned long long)arg1 messageName:(id)arg2;
- (id)messageName;
- (id)type;

@end
