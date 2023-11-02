
@interface SystemProtectedConfig : NSObject {
    int  _bioMatchLifespan;
    int  _biometryEnabled;
    int  _identificationEnabled;
    int  _loginEnabled;
    int  _passcodeInputLifespan;
    int  _periocularMatchEnabled;
    int  _unlockEnabled;
    int  _unlockTokenMaxLifetime;
}

@property (nonatomic) int bioMatchLifespan;
@property (nonatomic) int biometryEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int passcodeInputLifespan;
@property (nonatomic) int periocularMatchEnabled;
@property (nonatomic) int unlockEnabled;
@property (nonatomic) int unlockTokenMaxLifetime;

- (int)bioMatchLifespan;
- (int)biometryEnabled;
- (int)identificationEnabled;
- (id)init;
- (int)loginEnabled;
- (int)passcodeInputLifespan;
- (int)periocularMatchEnabled;
- (void)setBioMatchLifespan:(int)arg1;
- (void)setBiometryEnabled:(int)arg1;
- (void)setIdentificationEnabled:(int)arg1;
- (void)setLoginEnabled:(int)arg1;
- (void)setPasscodeInputLifespan:(int)arg1;
- (void)setPeriocularMatchEnabled:(int)arg1;
- (void)setUnlockEnabled:(int)arg1;
- (void)setUnlockTokenMaxLifetime:(int)arg1;
- (int)unlockEnabled;
- (int)unlockTokenMaxLifetime;

@end
