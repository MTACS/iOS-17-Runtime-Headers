
@interface HMDAccessCodeSetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _failureReason;
    bool  _success;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool success;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)failureReason;
- (id)init;
- (void)submitFailureWithReason:(unsigned long long)arg1 error:(id)arg2;
- (void)submitSuccess;
- (bool)success;

@end
