
@interface _UITouchAuthenticationRecord : NSObject {
    bool  _eventLeadToSensitiveDataTransmission;
    BKSWindowServerHitTestSecurityAnalysis * _hitTestSecurityAnalysis;
    NSString * _hostBundleId;
    bool  _hostSupportsStrictTouchVerification;
    double  _timestamp;
    unsigned long long  _transformGradeFailureReasons;
}

@property (nonatomic) bool eventLeadToSensitiveDataTransmission;
@property (nonatomic, readonly) BKSWindowServerHitTestSecurityAnalysis *hitTestSecurityAnalysis;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) bool touchIsAuthentic;
@property (nonatomic, readonly) unsigned long long transformGradeFailureReasons;

- (void).cxx_destruct;
- (bool)eventLeadToSensitiveDataTransmission;
- (id)hitTestSecurityAnalysis;
- (void)setEventLeadToSensitiveDataTransmission:(bool)arg1;
- (double)timestamp;
- (bool)touchIsAuthentic;
- (bool)touchIsAuthenticWithVerificationStrategy:(long long)arg1;
- (unsigned long long)transformGradeFailureReasons;

@end
