
@interface HMDFetchAccessorySettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSArray * _failedKeyPaths;
    NSArray * _keyPaths;
    NSString * _requestingClientName;
    unsigned long long  _responseTimeStamp;
    unsigned long long  _startTimeStamp;
    NSArray * _succeededKeyPaths;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *failedKeyPaths;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly, copy) NSArray *keyPaths;
@property (nonatomic, readonly, copy) NSString *requestingClientName;
@property (nonatomic) unsigned long long responseTimeStamp;
@property (nonatomic, readonly) unsigned long long startTimeStamp;
@property (nonatomic, copy) NSArray *succeededKeyPaths;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)failedKeyPaths;
- (id)initWithKeyPaths:(id)arg1 startTime:(unsigned long long)arg2 requestingClientName:(id)arg3 error:(id)arg4;
- (id)keyPaths;
- (id)requestingClientName;
- (unsigned long long)responseTimeStamp;
- (void)setFailedKeyPaths:(id)arg1;
- (void)setResponseTimeStamp:(unsigned long long)arg1;
- (void)setSucceededKeyPaths:(id)arg1;
- (unsigned long long)startTimeStamp;
- (id)succeededKeyPaths;

@end
