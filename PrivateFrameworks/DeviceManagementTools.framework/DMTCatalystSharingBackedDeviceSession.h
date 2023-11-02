
@interface DMTCatalystSharingBackedDeviceSession : NSObject <CATSharingDeviceSession> {
    id /* block */  _deviceSessionErrorHandler;
    id /* block */  _deviceSessionInvalidatedHandler;
    id /* block */  _deviceSessionReadyHandler;
    bool  _invalidated;
    id /* block */  _messageReceivedHandler;
    bool  _paired;
    id /* block */  _pinPromptHandler;
    bool  _ready;
    CATSharingDevice * _remoteDevice;
    SFSession * _session;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DMTSharingDevice *device;
@property (copy) id /* block */ deviceSessionErrorHandler;
@property (copy) id /* block */ deviceSessionInvalidatedHandler;
@property (copy) id /* block */ deviceSessionReadyHandler;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (copy) id /* block */ messageReceivedHandler;
@property (getter=isPaired, nonatomic) bool paired;
@property (copy) id /* block */ pinPromptHandler;
@property (getter=isReady, nonatomic) bool ready;
@property (nonatomic, readonly) CATSharingDevice *remoteDevice;
@property (nonatomic, readonly) SFSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) Class superclass;

+ (id)failureTypeForPairingError:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (void)addPrimitiveHandlers;
- (void)beginPairWithCompletion:(id /* block */)arg1;
- (void)deactivate;
- (id)device;
- (id /* block */)deviceSessionErrorHandler;
- (id /* block */)deviceSessionInvalidatedHandler;
- (id /* block */)deviceSessionReadyHandler;
- (id)initWithDevice:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (bool)isInvalidated;
- (bool)isPaired;
- (bool)isReady;
- (id /* block */)messageReceivedHandler;
- (id /* block */)pinPromptHandler;
- (id)remoteDevice;
- (void)removePrimitiveHandlers;
- (void)sendMessage:(id)arg1;
- (id)session;
- (id)sessionQueue;
- (void)setDeviceSessionErrorHandler:(id /* block */)arg1;
- (void)setDeviceSessionInvalidatedHandler:(id /* block */)arg1;
- (void)setDeviceSessionReadyHandler:(id /* block */)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setMessageReceivedHandler:(id /* block */)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPinPromptHandler:(id /* block */)arg1;
- (void)setReady:(bool)arg1;
- (void)tryPairingPIN:(id)arg1;
- (void)verifyPairing:(id /* block */)arg1;

@end
