
@interface DDUIEndpointPairingSession : NSObject <DDUIEndpointPairingInitiatorSession, DDUIEndpointPairingReceiverSession> {
    NSObject<OS_dispatch_group> * _activateGroup;
    bool  _activated;
    id /* block */  _completionHandler;
    id /* block */  _errorHandler;
    unsigned long long  _mode;
    NSUUID * _sessionID;
    NSDictionary * _startUserInfo;
    unsigned long long  _state;
    <DDUIEndpointPairingTransportSession> * _transportSession;
    NSDictionary * incomingMessage;
    unsigned long long  sessionType;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *activateGroup;
@property (nonatomic) bool activated;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *incomingMessage;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, readonly) <DDUIDevice> *remoteDevice;
@property (nonatomic, retain) NSUUID *sessionID;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic, retain) NSDictionary *startUserInfo;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) <DDUIEndpointPairingTransportSession> *transportSession;

- (void).cxx_destruct;
- (void)_activateWithErrorHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_clearBlocks;
- (void)_failPairing;
- (bool)_handleIncomingMessage:(id)arg1;
- (void)_pairWithInfo:(id)arg1;
- (void)_sendPairingWithInfo:(id)arg1;
- (id)activateGroup;
- (void)activateWithErrorHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)activated;
- (void)cancelWithMessage:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id)incomingMessage;
- (id)initWithTransportSession:(id)arg1 mode:(unsigned long long)arg2;
- (void)invalidate;
- (unsigned long long)mode;
- (void)pairWithMessage:(id)arg1;
- (void)pairWithMessage:(id)arg1 errorHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)processInitialMessage:(id)arg1;
- (id)remoteDevice;
- (id)sessionID;
- (unsigned long long)sessionType;
- (void)setActivateGroup:(id)arg1;
- (void)setActivated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setIncomingMessage:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setStartUserInfo:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTransportSession:(id)arg1;
- (id)startUserInfo;
- (unsigned long long)state;
- (id)transportSession;

@end
