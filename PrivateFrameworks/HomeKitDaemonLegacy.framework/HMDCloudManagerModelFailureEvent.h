
@interface HMDCloudManagerModelFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _errorCode;
    NSString * _errorDomain;
    NSNumber * _failureCode;
    NSString * _model;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *errorCode;
@property (readonly, copy) NSString *errorDomain;
@property (readonly, copy) NSNumber *failureCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSString *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)errorCode;
- (id)errorDomain;
- (id)failureCode;
- (id)initWithModel:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3;
- (id)model;

@end
