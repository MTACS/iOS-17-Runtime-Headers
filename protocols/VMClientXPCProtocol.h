
@protocol VMClientXPCProtocol <VMAccountManagerXPCClient, VMGreetingManagerXPCClient, VMMessageManagerXPCClient>

@required

- (void)setCapabilities:(VMVoicemailCapabilities *)arg1;
- (void)setOnline:(bool)arg1;
- (void)setStorageUsage:(unsigned long long)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSyncInProgress:(bool)arg1;
- (void)setTranscribing:(bool)arg1;
- (void)voicemailsUpdated:(NSOrderedSet *)arg1;

@end
