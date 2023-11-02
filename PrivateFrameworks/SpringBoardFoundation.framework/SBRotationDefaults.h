
@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long lastLockedOrientation;
@property (getter=isPostModernRotationForciblyEnabled, nonatomic, readonly) bool postModernRotationForciblyEnabled;
@property (getter=isVideoRotationEnabled, nonatomic, readonly) bool videoRotationEnabled;

- (void)_bindAndRegisterDefaults;

@end
