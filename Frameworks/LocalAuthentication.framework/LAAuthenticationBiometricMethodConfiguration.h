
@interface LAAuthenticationBiometricMethodConfiguration : LAAuthenticationMethodConfiguration {
    bool  _autoRetry;
    bool  _avoidUsingFaceIDCamera;
}

@property (nonatomic, readonly) bool autoRetry;
@property (nonatomic, readonly) bool avoidUsingFaceIDCamera;

- (bool)autoRetry;
- (bool)avoidUsingFaceIDCamera;
- (id)initWithAutoRetry:(bool)arg1 avoidUsingFaceIDCamera:(bool)arg2 allowedUsers:(id)arg3 authenticationContext:(id)arg4;

@end
