
@interface HMDLegacyPrimaryElectionConfirmationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _availableResidentCount;
    bool  _changedPrimary;
    NSString * _criteria;
    unsigned long long  _residentsRespondedCount;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property unsigned long long availableResidentCount;
@property bool changedPrimary;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (copy) NSString *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property unsigned long long residentsRespondedCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)availableResidentCount;
- (bool)changedPrimary;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)criteria;
- (id)init;
- (unsigned long long)residentsRespondedCount;
- (void)setAvailableResidentCount:(unsigned long long)arg1;
- (void)setChangedPrimary:(bool)arg1;
- (void)setCriteria:(id)arg1;
- (void)setResidentsRespondedCount:(unsigned long long)arg1;

@end
