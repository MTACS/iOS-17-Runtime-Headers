
@interface AuthenticationServicesCore.ASCABLEClient : NSObject <CBCentralManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  authenticatorAdvertisement;
    void bluetoothManager;
    void clientDataJSON;
    void completionHandler;
    void cryptographyManager;
    void currentOperationType;
    void currentRelyingPartyIdentifier;
    void currentState;
    void delegate;
    void powerLogger;
    void qrCodeStruct;
    void testDelegate;
    void webSocket;
}

@property (nonatomic, readonly) NSURL *qrCodeURL;

- (void).cxx_destruct;
- (void)cancelIfNecessary;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 isRegistrationRequest:(bool)arg2;
- (void)performAuthenticationOperation:(long long)arg1 forRelyingPartyIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)qrCodeURL;

@end
