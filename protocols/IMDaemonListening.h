
@protocol IMDaemonListening <NSObject>

@required

- (void)addHandler:(id)arg1;
- (void)holdChatMessages;
- (bool)isHoldingChatMessages;
- (unsigned int)myIdleTime;
- (unsigned long long)myStatus;
- (NSString *)myStatusMessage;
- (NSDictionary *)persistentProperties;
- (NSDictionary *)properties;
- (void)releaseHeldChatMessages;
- (void)removeHandler:(id)arg1;
- (bool)shouldHoldChatMessages;
- (id)valueOfPersistentProperty:(NSString *)arg1;
- (id)valueOfProperty:(NSString *)arg1;
- (unsigned long long)vcCapabilities;

@end
