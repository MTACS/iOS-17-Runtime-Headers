
@interface HMDCoordinationPrimaryElectionDetailedLogEvent : HMDCoordinationPrimaryElectionLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _confirmationCriteria;
    unsigned long long  _electionTriggerReason;
    bool  _meshAndPrimaryCandidateCountEqual;
    bool  _previousPrimaryInMesh;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) unsigned long long confirmationCriteria;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long electionTriggerReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool meshAndPrimaryCandidateCountEqual;
@property (readonly) bool previousPrimaryInMesh;
@property (readonly) Class superclass;

- (unsigned long long)confirmationCriteria;
- (id)coreAnalyticsEventDictionary;
- (unsigned long long)electionTriggerReason;
- (id)initWithIsPrimary:(bool)arg1 didChangePrimary:(bool)arg2 electionTriggerReason:(unsigned long long)arg3 confirmationCriteria:(unsigned long long)arg4 meshAndPrimaryCandidateCountEqual:(bool)arg5 previousPrimaryInMesh:(bool)arg6;
- (bool)meshAndPrimaryCandidateCountEqual;
- (bool)previousPrimaryInMesh;

@end
