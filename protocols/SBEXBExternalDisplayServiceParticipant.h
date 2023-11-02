
@protocol SBEXBExternalDisplayServiceParticipant <NSObject>

@required

- (FBSDisplayConfiguration *)displayConfiguration;
- (bool)isActive;
- (bool)isExtendedDisplayCapable;

@end
