
@interface HMDLegacyPrimaryElectionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _availableResidentCount;
    NSString * _criteria;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property unsigned long long availableResidentCount;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (copy) NSString *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)availableResidentCount;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)criteria;
- (id)reason;
- (void)setAvailableResidentCount:(unsigned long long)arg1;
- (void)setCriteria:(id)arg1;
- (void)setReason:(id)arg1;

@end
