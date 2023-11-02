
@interface DIDropInCenter : NSObject <DIXPCManagerDelegate> {
    DIAudioPowerController * _audioPowerController;
    DIAudioSystemController * _audioSystemController;
    DIXPCConnectionManager * _connectionManager;
    <DIDropInCenterDelegate> * _delegate;
    DIDeviceManager * _deviceManager;
    NSUUID * _homeIdentifier;
    DIDropInSessionManager * _sessionManager;
}

@property (nonatomic, retain) DIAudioPowerController *audioPowerController;
@property (nonatomic, retain) DIAudioSystemController *audioSystemController;
@property (nonatomic, readonly) DIXPCConnectionManager *connectionManager;
@property (nonatomic) <DIDropInCenterDelegate> *delegate;
@property (nonatomic, retain) DIDeviceManager *deviceManager;
@property (nonatomic, readonly) NSUUID *homeIdentifier;
@property (nonatomic, retain) DIDropInSessionManager *sessionManager;

+ (id)new;

- (void).cxx_destruct;
- (id)audioPowerController;
- (id)audioSystemController;
- (id)connectionManager;
- (id)createAudioPowerController;
- (id)createAudioSystemController;
- (void)dealloc;
- (id)delegate;
- (id)deviceManager;
- (id)homeIdentifier;
- (id)init;
- (id)initWithHomeIdentifier:(id)arg1;
- (id)initWithHomeIdentifier:(id)arg1 queue:(id)arg2;
- (id)initWithNullableHomeIdentifier:(id)arg1 queue:(id)arg2;
- (void)managerDidInterruptConnection:(id)arg1;
- (id)sessionManager;
- (void)setAudioPowerController:(id)arg1;
- (void)setAudioSystemController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)startSessionWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
