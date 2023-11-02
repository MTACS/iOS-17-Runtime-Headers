
@interface TUMutableConversationParticipant : TUConversationParticipant

@property (nonatomic, copy) NSString *activeIDSDestination;
@property (nonatomic, copy) TUConversationParticipantAssociation *association;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic) long long audioPriority;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic, copy) NSString *avcIdentifier;
@property (getter=isCameraMixedWithScreen, nonatomic) bool cameraMixedWithScreen;
@property (nonatomic, copy) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic) long long captionsToken;
@property (getter=isGuestModeEnabled, nonatomic) bool guestModeEnabled;
@property (nonatomic, copy) TUHandle *handle;
@property (nonatomic) unsigned long long identifier;
@property (getter=isLightweight, nonatomic) bool lightweight;
@property (getter=isMuted, nonatomic) bool muted;
@property (getter=isScreenEnabled, nonatomic) bool screenEnabled;
@property (nonatomic) long long screenToken;
@property (getter=isSpatialPersonaEnabled, nonatomic) bool spatialPersonaEnabled;
@property (nonatomic) long long streamToken;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (nonatomic) long long videoPriority;

@end
