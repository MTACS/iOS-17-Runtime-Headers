
@interface HMDUserCloudShareOwnerAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _configureState;
    NSNumber * _hasSharedUser;
    NSNumber * _isPrimaryResident;
    NSNumber * _percentageOfAcceptedParticipantsWithoutCloudShareID;
    NSNumber * _percentageOfNonAcceptedParticipantsWithKnownCapability;
    NSNumber * _percentageOfParticipantsHaveAccepted;
    NSNumber * _percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
    NSNumber * _percentageOfParticipantsHaveCloudShareIDButNotAccepted;
    NSNumber * _percentageOfParticipatingUsersThatNotAccepted;
    NSNumber * _percentageOfUsersThatAreNotParticipant;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *configureState;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *hasSharedUser;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID;
@property (readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted;
@property (readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configureState;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)hasSharedUser;
- (id)initWithConfigureState:(long long)arg1 isPrimaryResident:(bool)arg2 trustStatusCounts:(struct CloudShareTrustManagerTrustStatusCounts { long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })arg3;
- (id)isPrimaryResident;
- (id)percentageOfAcceptedParticipantsWithoutCloudShareID;
- (id)percentageOfNonAcceptedParticipantsWithKnownCapability;
- (id)percentageOfParticipantsHaveAccepted;
- (id)percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
- (id)percentageOfParticipantsHaveCloudShareIDButNotAccepted;
- (id)percentageOfParticipatingUsersThatNotAccepted;
- (id)percentageOfUsersThatAreNotParticipant;

@end
