
@interface CARWirelessPairingSession : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _connection;
    <CARWirelessPairingDelegate> * _delegate;
    NSString * _keyIdentifier;
    unsigned long long  _supportedCapabilities;
    NSData * _vehicleAddress;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <CARWirelessPairingDelegate> *delegate;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) unsigned long long supportedCapabilities;
@property (nonatomic, readonly) NSData *vehicleAddress;

- (void).cxx_destruct;
- (void)_delegate_handleCompletedWithResult:(unsigned long long)arg1;
- (void)_delegate_handleRequestedPairingWithDeviceAddress:(id)arg1 forIntent:(unsigned long long)arg2 C192:(id)arg3 R192:(id)arg4 C256:(id)arg5 R256:(id)arg6;
- (void)_handleConnectionReset;
- (void)_servicePerform:(id /* block */)arg1;
- (void)_setupConnection;
- (void)_synchronous_servicePerform:(id /* block */)arg1;
- (void)cancelPairing;
- (id)clientQueue;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)handleVehicleReportedResult:(bool)arg1;
- (id)initWithVehicleAddress:(id)arg1 supportedCapabilites:(unsigned long long)arg2 keyIdentifier:(id)arg3;
- (void)invalidate;
- (id)keyIdentifier;
- (void)requestPairing;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupVehicleDataC192:(id)arg1 r192:(id)arg2 c256:(id)arg3 r256:(id)arg4;
- (unsigned long long)supportedCapabilities;
- (id)vehicleAddress;

@end
