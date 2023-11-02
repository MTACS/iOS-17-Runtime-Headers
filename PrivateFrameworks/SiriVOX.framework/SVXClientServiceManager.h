
@interface SVXClientServiceManager : NSObject <SVXClientServiceConnectionDelegate, SVXClientServiceProviding> {
    <SVXClientActivationServicing> * _activationService;
    AFAnalytics * _analytics;
    <SVXClientAudioSystemServicing> * _audioSystemService;
    SVXClientServiceConnection * _connection;
    <SVXClientDeviceServicing> * _deviceService;
    <SVXClientAudioPowerServicing> * _inputAudioPowerService;
    <SVXClientKeepAliveServicing> * _keepAliveService;
    <SVXClientAudioPowerServicing> * _outputAudioPowerService;
    <SVXPerforming> * _performer;
    <SVXClientSessionServicing> * _sessionService;
    <SVXClientSessionStateServicing> * _sessionStateService;
    <SVXClientSpeechSynthesisServicing> * _speechSynthesisService;
}

@property (nonatomic, readonly) <SVXClientActivationServicing> *activationService;
@property (nonatomic, readonly) <SVXClientAudioSystemServicing> *audioSystemService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVXClientDeviceServicing> *deviceService;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVXClientAudioPowerServicing> *inputAudioPowerService;
@property (nonatomic, readonly) <SVXClientKeepAliveServicing> *keepAliveService;
@property (nonatomic, readonly) <SVXClientAudioPowerServicing> *outputAudioPowerService;
@property (nonatomic, readonly) <SVXClientSessionServicing> *sessionService;
@property (nonatomic, readonly) <SVXClientSessionStateServicing> *sessionStateService;
@property (nonatomic, readonly) <SVXClientSpeechSynthesisServicing> *speechSynthesisService;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_connect;
- (id)_connection;
- (id)activationService;
- (id)audioSystemService;
- (id)clientServiceConnection:(id)arg1 performerForComponent:(long long)arg2;
- (void)clientServiceConnectionDidInvalidate:(id)arg1;
- (id)deviceService;
- (void)getClientServiceUsingBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)init;
- (id)inputAudioPowerService;
- (id)keepAliveService;
- (id)outputAudioPowerService;
- (id)sessionService;
- (id)sessionStateService;
- (id)speechSynthesisService;

@end
