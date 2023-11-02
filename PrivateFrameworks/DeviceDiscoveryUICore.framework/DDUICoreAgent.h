
@interface DDUICoreAgent : NSObject {
    DDUIEndpointPairingListener * _endpointPairingListener;
    _DDUINotificationManager * _notificationManager;
    bool  _started;
}

@property (nonatomic, retain) DDUIEndpointPairingListener *endpointPairingListener;
@property (nonatomic, retain) _DDUINotificationManager *notificationManager;
@property (nonatomic) bool started;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleIncomingContinuityCameraConfirmation:(id)arg1;
- (void)_handleIncomingPairingSession:(id)arg1 pairingMessage:(id)arg2;
- (void)_setupListenerIfNeededWithCompletion:(id /* block */)arg1;
- (void)_showNotificationForPairingSession:(id)arg1 pairingMessage:(id)arg2;
- (void)_startOnQueue;
- (id)endpointPairingListener;
- (id)notificationManager;
- (void)setEndpointPairingListener:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)start;
- (bool)started;

@end
