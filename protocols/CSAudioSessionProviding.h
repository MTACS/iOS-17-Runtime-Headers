
@protocol CSAudioSessionProviding <NSObject>

@required

- (bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(NSString *)arg3 error:(id*)arg4;
- (bool)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
- (void)enableMiniDucking:(bool)arg1;
- (void)enableSmartRoutingConsideration:(bool)arg1;
- (bool)prewarmAudioSessionWithError:(id*)arg1;
- (void)setAudioSessionDelegate:(id <CSAudioSessionProvidingDelegate>)arg1;
- (void)setDuckOthersOption:(bool)arg1;

@end
