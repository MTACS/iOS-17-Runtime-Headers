
@interface VSSpeechConnection : NSObject {
    <VSSpeechConnectionDelegate> * _delegate;
    VSSpeechConnectionDelegateWrapper * _delegateWrapper;
    NSString * _identifier;
    bool  _keepActive;
    NSObject<OS_dispatch_queue> * _threadSafeQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <VSSpeechConnectionDelegate> *delegate;
@property (nonatomic, retain) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool keepActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (id)_remoteObject;
- (id)_remoteObjectSync;
- (id)_remoteObjectWithErrorHandler:(id /* block */)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)arg1;
- (void)cachePresynthesizedAudioRequest:(id)arg1;
- (oneway void)cleanUnusedAssets:(id /* block */)arg1;
- (void)continueSpeechRequest:(id)arg1;
- (id)currentAudioRequest;
- (id)currentRequest;
- (void)dealloc;
- (id)delegate;
- (id)delegateWrapper;
- (void)endAudioPowerUpdate;
- (void)estimateDurationWithRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)forwardStreamObject:(id)arg1;
- (void)getAllVoiceSubscriptionsWithReply:(id /* block */)arg1;
- (void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(id /* block */)arg2;
- (void)getLocalVoiceResources:(id /* block */)arg1;
- (void)getSubscribedVoiceAssetsWithClientID:(id)arg1 forAccessoryID:(id)arg2 reply:(id /* block */)arg3;
- (void)getVoiceInfoForLanguageCode:(id)arg1 name:(id)arg2 footprint:(long long)arg3 gender:(long long)arg4 type:(long long)arg5 reply:(id /* block */)arg6;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(id /* block */)arg2;
- (id)identifier;
- (id)init;
- (void)invokeDaemon:(id /* block */)arg1;
- (bool)isSystemSpeaking;
- (bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (bool)keepActive;
- (void)killDaemon;
- (void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (void)prewarmIfNeededWithRequest:(id)arg1 reply:(id /* block */)arg2;
- (bool)queryPhaticCapabilityWithRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateWrapper:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeepActive:(bool)arg1;
- (void)setSubscribedVoiceAssets:(id)arg1 withClientID:(id)arg2 forAccessoryID:(id)arg3;
- (void)setThreadSafeQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startPhonemesRequest:(id)arg1 phonemeSystem:(long long)arg2 reply:(id /* block */)arg3;
- (void)startPresynthesizedAudioRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)startSynthesisRequest:(id)arg1;
- (void)startVoicePreviewRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)stopPresynthesizedAudioRequest:(id)arg1;
- (void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (void)stopVoicePreview;
- (id)threadSafeQueue;
- (void)triggerCellularDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;
- (void)updateWithConnectionIdentifier:(id)arg1 keepActive:(bool)arg2;
- (id)xpcConnection;

@end
