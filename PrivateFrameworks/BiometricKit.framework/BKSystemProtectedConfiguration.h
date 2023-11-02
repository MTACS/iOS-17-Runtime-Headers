
@interface BKSystemProtectedConfiguration : NSObject {
    NSNumber * _bioMatchLifespan;
    NSNumber * _biometryEnabled;
    NSNumber * _identificationEnabled;
    NSNumber * _loginEnabled;
    NSNumber * _passcodeInputLifespan;
    NSNumber * _periocularFaceIDMatchEnabled;
    NSNumber * _unlockEnabled;
    NSNumber * _unlockTokenMaxLifetime;
}

@property (nonatomic, retain) NSNumber *bioMatchLifespan;
@property (nonatomic, retain) NSNumber *biometryEnabled;
@property (nonatomic, retain) NSNumber *identificationEnabled;
@property (nonatomic, retain) NSNumber *loginEnabled;
@property (nonatomic, retain) NSNumber *passcodeInputLifespan;
@property (nonatomic, retain) NSNumber *periocularFaceIDMatchEnabled;
@property (nonatomic, retain) NSNumber *unlockEnabled;
@property (nonatomic, retain) NSNumber *unlockTokenMaxLifetime;

- (void).cxx_destruct;
- (id)bioMatchLifespan;
- (id)biometryEnabled;
- (id)description;
- (id)dictionary;
- (id)identificationEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)loginEnabled;
- (id)passcodeInputLifespan;
- (id)periocularFaceIDMatchEnabled;
- (void)setBioMatchLifespan:(id)arg1;
- (void)setBiometryEnabled:(id)arg1;
- (void)setIdentificationEnabled:(id)arg1;
- (void)setLoginEnabled:(id)arg1;
- (void)setPasscodeInputLifespan:(id)arg1;
- (void)setPeriocularFaceIDMatchEnabled:(id)arg1;
- (void)setUnlockEnabled:(id)arg1;
- (void)setUnlockTokenMaxLifetime:(id)arg1;
- (id)unlockEnabled;
- (id)unlockTokenMaxLifetime;

@end
