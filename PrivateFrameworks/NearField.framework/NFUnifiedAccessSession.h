
@interface NFUnifiedAccessSession : NFSession {
    NFApplet * _activeApplet;
    NSSet * _activeKeys;
    NSDictionary * _appletsById;
    <NFUnifiedAccessSessionDelegate> * _delegate;
    bool  _emulationActive;
    bool  _fieldNotificationSent;
    unsigned long long  _numActiveSEs;
}

@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NSSet *activeKeys;
@property <NFUnifiedAccessSessionDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)_startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (id)activeApplet;
- (id)activeKeys;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)arg1;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didReceiveActivityTimeout:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)arg1;
- (void)didSelectValueAddedService:(bool)arg1;
- (void)didStartSession:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (unsigned long long)numberOfActiveSecureElements;
- (bool)setActivePaymentApplet:(id)arg1 keys:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)startExpressMode:(id*)arg1;
- (bool)stopCardEmulation:(id*)arg1;

@end
