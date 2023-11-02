
@interface SVXClientServiceServerConnection : NSObject <SVXAudioPowerUpdateListening, SVXClientService, SVXSessionActivationListening, SVXSessionActivityListening> {
    <SVXClientServiceServerConnectionDelegate> * _delegate;
    SVXDeviceSetupManager * _deviceSetupManager;
    AFInstanceInfo * _instanceInfo;
    bool  _isConfigured;
    NSMutableArray * _pendingBlocksAfterConfigure;
    <SVXPerforming> * _performer;
    SVXSessionManager * _sessionManager;
    SVXSpeechSynthesizer * _speechSynthesizer;
    NSUUID * _uuid;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_cleanUpXPCConnection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_getInstanceInfoWithCompletion:(id /* block */)arg1;
- (void)_performBlockAfterConfigure:(id /* block */)arg1;
- (id)_remoteServiceDelegateWithErrorHandler:(id /* block */)arg1;
- (void)_updateInstanceInfo:(id)arg1;
- (oneway void)activateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)audioPowerDidEndUpdateForType:(long long)arg1;
- (void)audioPowerWillBeginUpdateForType:(long long)arg1 wrapper:(id)arg2;
- (void)audioSessionDidBecomeActive:(bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (void)audioSessionWillBecomeActive:(bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1;
- (void)configureWithDeviceSetupManager:(id)arg1 sessionManager:(id)arg2 speechSynthesizer:(id)arg3;
- (oneway void)deactivateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchAlarmAndTimerFiringContextWithCompletion:(id /* block */)arg1;
- (oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchSessionActivityStateWithCompletion:(id /* block */)arg1;
- (oneway void)fetchSessionStateWithCompletion:(id /* block */)arg1;
- (void)getInstanceInfoWithCompletion:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1 performer:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (oneway void)performManualEndpointing;
- (oneway void)pingWithReply:(id /* block */)arg1;
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)prewarmRequest:(id)arg1;
- (oneway void)prewarmWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)sessionDidBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2;
- (void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionDidFailAppLaunchWithBundleIdentifier:(id)arg1;
- (void)sessionDidResignActiveWithDeactivationContext:(id)arg1;
- (void)sessionDidStartSoundWithID:(long long)arg1;
- (void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (void)sessionManager:(id)arg1 didActivateWithContext:(id)arg2;
- (void)sessionManager:(id)arg1 didDeactivateWithContext:(id)arg2;
- (void)sessionManager:(id)arg1 didNotActivateWithContext:(id)arg2 error:(id)arg3;
- (void)sessionManager:(id)arg1 willActivateWithContext:(id)arg2;
- (void)sessionManager:(id)arg1 willDeactivateWithContext:(id)arg2;
- (void)sessionWillBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2;
- (void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (void)sessionWillProcessAppLaunchWithBundleIdentifier:(id)arg1;
- (void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (void)sessionWillStartSoundWithID:(long long)arg1;
- (oneway void)setDeviceSetupContext:(id)arg1;
- (oneway void)stopSpeechSynthesisRequest:(id)arg1;
- (oneway void)synthesizeRequest:(id)arg1 handlerUUID:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)transitToAutomaticEndpointingWithTimestamp:(unsigned long long)arg1;
- (id)uuid;

@end
