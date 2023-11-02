
@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem : HAP2AccessoryServerPairingDriverWorkItem {
    NSError * _cancelError;
    bool  _connect;
}

@property (nonatomic, retain) NSError *cancelError;
@property (nonatomic, readonly) bool connect;

+ (id)closeConnection;
+ (id)openConnection;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (bool)connect;
- (id)initForClosing;
- (id)initForOpening;
- (id)initWithConnect:(bool)arg1;
- (void)runForPairingDriver:(id)arg1;
- (void)setCancelError:(id)arg1;

@end
