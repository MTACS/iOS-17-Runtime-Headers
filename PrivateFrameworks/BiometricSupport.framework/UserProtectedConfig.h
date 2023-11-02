
@interface UserProtectedConfig : NSObject {
    int  _applePayEnabled;
    int  _attentionDetectionEnabled;
    int  _identificationEnabled;
    int  _loginEnabled;
    int  _periocularMatchEnabled;
    int  _unlockEnabled;
}

@property (nonatomic) int applePayEnabled;
@property (nonatomic) int attentionDetectionEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int periocularMatchEnabled;
@property (nonatomic) int unlockEnabled;

- (int)applePayEnabled;
- (int)attentionDetectionEnabled;
- (int)identificationEnabled;
- (id)init;
- (int)loginEnabled;
- (int)periocularMatchEnabled;
- (void)setApplePayEnabled:(int)arg1;
- (void)setAttentionDetectionEnabled:(int)arg1;
- (void)setIdentificationEnabled:(int)arg1;
- (void)setLoginEnabled:(int)arg1;
- (void)setPeriocularMatchEnabled:(int)arg1;
- (void)setUnlockEnabled:(int)arg1;
- (int)unlockEnabled;

@end
