
@interface LAAuthenticationBiometricMethod : LAAuthenticationMethod <LAUIDelegate> {
    LAContext * _context;
    LAAuthenticationBiometricMethodState * _currentState;
    bool  _isAllowed;
    bool  _isDevicePresent;
    bool  _isEnrolled;
}

@property (nonatomic, readonly) LAContext *context;
@property (nonatomic, retain) LAAuthenticationBiometricMethodState *currentState;
@property (nonatomic, readonly) bool isAllowed;
@property (nonatomic, readonly) bool isDevicePresent;
@property (nonatomic, readonly) bool isEnrolled;

- (void).cxx_destruct;
- (id)context;
- (id)currentState;
- (void)distributeBiometricFeedback:(long long)arg1;
- (void)distributeStateChange;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1;
- (bool)isAllowed;
- (bool)isDevicePresent;
- (bool)isEnrolled;
- (unsigned long long)lockoutStateFromError:(id)arg1;
- (void)runBiometricOperation;
- (void)setCurrentState:(id)arg1;
- (bool)start;
- (void)terminate;

@end
