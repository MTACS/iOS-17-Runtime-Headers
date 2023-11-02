
@interface SVXVirtualDevice : NSObject {
    AFAnalytics * _analytics;
    AFInstanceContext * _instanceContext;
    SVXModuleInstanceMap * _moduleInstanceMap;
    NSDictionary * _modulesByIdentifier;
    AFPreferences * _preferences;
}

@property (nonatomic, readonly) <SVXActivationHandling> *activationHandler;
@property (nonatomic, readonly) SVXClientServiceServer *clientServiceServer;
@property (nonatomic, readonly) <SVXDeactivationHandling> *deactivationHandler;
@property (nonatomic, readonly) SVXDeviceSetupManager *deviceSetupManager;
@property (nonatomic, readonly) <SVXMyriadEventHandling> *myriadEventHandler;
@property (nonatomic, readonly) AFPreferences *preferences;
@property (nonatomic, readonly) <SVXPrewarmHandling> *prewarmHandler;
@property (nonatomic, readonly) SVXSessionManager *sessionManager;
@property (nonatomic, readonly) SVXSpeechSynthesizer *speechSynthesizer;

- (void).cxx_destruct;
- (void)_startWithModuleInstanceMap:(id)arg1 platformDependencies:(id)arg2;
- (void)_stopWithModuleInstanceMap:(id)arg1;
- (id)activationHandler;
- (id)clientServiceServer;
- (id)deactivationHandler;
- (id)description;
- (id)deviceSetupManager;
- (id)initWithInstanceContext:(id)arg1;
- (id)myriadEventHandler;
- (id)preferences;
- (id)prewarmHandler;
- (id)sessionManager;
- (id)speechSynthesizer;
- (void)startWithPlatformDependencies:(id)arg1;
- (void)stop;

@end
