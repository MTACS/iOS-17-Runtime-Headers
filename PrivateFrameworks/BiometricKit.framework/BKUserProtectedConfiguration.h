
@interface BKUserProtectedConfiguration : NSObject {
    NSNumber * _applePayEnabled;
    NSNumber * _attentionDetectionEnabled;
    NSNumber * _identificationEnabled;
    NSNumber * _loginEnabled;
    NSNumber * _periocularFaceIDMatchEnabled;
    NSNumber * _unlockEnabled;
}

@property (nonatomic, retain) NSNumber *applePayEnabled;
@property (nonatomic, retain) NSNumber *attentionDetectionEnabled;
@property (nonatomic, retain) NSNumber *identificationEnabled;
@property (nonatomic, retain) NSNumber *loginEnabled;
@property (nonatomic, retain) NSNumber *periocularFaceIDMatchEnabled;
@property (nonatomic, retain) NSNumber *unlockEnabled;

- (void).cxx_destruct;
- (id)applePayEnabled;
- (id)attentionDetectionEnabled;
- (id)description;
- (id)dictionary;
- (id)identificationEnabled;
- (id)initWithDictionary:(id)arg1 effective:(bool)arg2;
- (id)loginEnabled;
- (id)periocularFaceIDMatchEnabled;
- (void)setApplePayEnabled:(id)arg1;
- (void)setAttentionDetectionEnabled:(id)arg1;
- (void)setIdentificationEnabled:(id)arg1;
- (void)setLoginEnabled:(id)arg1;
- (void)setPeriocularFaceIDMatchEnabled:(id)arg1;
- (void)setUnlockEnabled:(id)arg1;
- (id)unlockEnabled;

@end
