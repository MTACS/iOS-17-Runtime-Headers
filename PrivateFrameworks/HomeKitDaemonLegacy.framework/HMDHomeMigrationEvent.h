
@interface HMDHomeMigrationEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _model;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithModel:(id)arg1 reason:(id)arg2;
- (id)model;
- (id)reason;

@end
