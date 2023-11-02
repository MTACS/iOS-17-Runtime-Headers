
@protocol SVXTaskContextMutating <NSObject>

@required

- (void)setAceId:(NSString *)arg1;
- (void)setActivationContext:(SVXActivationContext *)arg1;
- (void)setDeactivationContext:(SVXDeactivationContext *)arg1;
- (void)setDialogIdentifier:(NSString *)arg1;
- (void)setDialogPhase:(NSString *)arg1;
- (void)setError:(NSError *)arg1;
- (void)setIsUUFR:(bool)arg1;
- (void)setListenAfterSpeakingBehavior:(SAUIListenAfterSpeakingBehavior *)arg1;
- (void)setListensAfterSpeaking:(bool)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRefId:(NSString *)arg1;
- (void)setRequestUUID:(NSUUID *)arg1;
- (void)setSessionUUID:(NSUUID *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;

@end
