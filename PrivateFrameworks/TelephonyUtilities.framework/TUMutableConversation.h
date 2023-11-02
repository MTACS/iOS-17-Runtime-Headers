
@interface TUMutableConversation : TUConversation {
    bool  _relaying;
}

@property (nonatomic, copy) NSSet *activeRemoteParticipants;
@property (nonatomic, copy) NSSet *activitySessions;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic) unsigned long long avMode;
@property (nonatomic, copy) NSString *avcSessionIdentifier;
@property (nonatomic) long long avcSessionToken;
@property (getter=isBackedByGroupSession, nonatomic) bool backedByGroupSession;
@property (getter=isCameraMixedWithScreen, nonatomic) bool cameraMixedWithScreen;
@property (nonatomic, retain) <TUFeatureFlags> *featureFlags;
@property (nonatomic, retain) TUConversationHandoffContext *handoffContext;
@property (nonatomic, retain) TUConversationHandoffEligibility *handoffEligibility;
@property (getter=hasJoined, nonatomic) bool hasJoined;
@property (nonatomic, retain) TUHandle *initiator;
@property (nonatomic, copy) NSSet *invitationPreferences;
@property (nonatomic) long long letMeInRequestState;
@property (nonatomic, copy) NSSet *lightweightMembers;
@property (nonatomic, retain) TUConversationLink *link;
@property (nonatomic, retain) TUConversationMember *localMember;
@property (nonatomic, retain) TUConversationParticipantAssociation *localParticipantAssociation;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (getter=isLocallyCreated, nonatomic) bool locallyCreated;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (nonatomic, copy) NSString *messagesGroupName;
@property (nonatomic, retain) NSUUID *messagesGroupUUID;
@property (getter=isOneToOneHandoffOngoing, nonatomic) bool oneToOneHandoffOngoing;
@property (getter=isOneToOneModeEnabled, nonatomic) bool oneToOneModeEnabled;
@property (nonatomic, copy) NSSet *participantHandles;
@property (nonatomic, copy) NSSet *pendingMembers;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, copy) NSSet *rejectedMembers;
@property (getter=isRelaying, nonatomic) bool relaying;
@property (nonatomic, copy) NSSet *remoteMembers;
@property (nonatomic, copy) TUConversationReport *report;
@property (nonatomic, retain) NSObject *reportingHierarchySubToken;
@property (nonatomic, retain) NSObject *reportingHierarchyToken;
@property (getter=isScreenEnabled, nonatomic) bool screenEnabled;
@property (getter=isScreening, nonatomic) bool screening;
@property (getter=isSpatialPersonaEnabled, nonatomic) bool spatialPersonaEnabled;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSArray *supportedMediaTypes;
@property (nonatomic, copy) NSSet *systemActivitySessions;
@property (getter=isVideo, nonatomic) bool video;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (nonatomic, copy) NSSet *virtualParticipants;

- (bool)isRelaying;
- (void)setRelaying:(bool)arg1;

@end
