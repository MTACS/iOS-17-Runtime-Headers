
@interface TUMutableConversationParticipantCapabilities : TUConversationParticipantCapabilities

@property (getter=isGFTDowngradeToOneToOneAvailable, nonatomic) bool gftDowngradeToOneToOneAvailable;
@property (getter=isGondolaCallingAvailable, nonatomic) bool gondolaCallingAvailable;
@property (getter=isMirageAvailable, nonatomic) bool mirageAvailable;
@property (getter=isMomentsAvailable, nonatomic) bool momentsAvailable;
@property (getter=isPersonaAvailable, nonatomic) bool personaAvailable;
@property (getter=isScreenSharingAvailable, nonatomic) bool screenSharingAvailable;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;
@property (nonatomic) bool supportsLeaveContext;
@property (getter=isUPlusNDowngradeAvailable, nonatomic) bool uPlusNDowngradeAvailable;
@property (getter=isUPlusOneAVLessAvailable, nonatomic) bool uPlusOneAVLessAvailable;
@property (getter=isUPlusOneScreenShareAvailable, nonatomic) bool uPlusOneScreenShareAvailable;

- (void)setMirageAvailable:(bool)arg1;

@end
