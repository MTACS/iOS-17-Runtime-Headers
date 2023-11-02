
@interface CBServer : NSObject <CBActivatable, CBLabelable, CBPairingAgentDelegate, CBPeripheralManagerDelegate, CBStateReporting> {
    id /* block */  _acceptHandler;
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    unsigned short  _bleListenPSM;
    unsigned short  _bleListeningPSM;
    long long  _bluetoothState;
    id /* block */  _bluetoothStateChangedHandler;
    id /* block */  _configChangedHandler;
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    NSString * _label;
    CBPeripheralManager * _peripheralManager;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) id /* block */ acceptHandler;
@property (nonatomic) unsigned short bleListenPSM;
@property (nonatomic, readonly) unsigned short bleListeningPSM;
@property (nonatomic, readonly) long long bluetoothState;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, copy) id /* block */ configChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_handleConnectionInvalidated:(id)arg1;
- (void)_invalidate;
- (void)_startIfNeeded;
- (id /* block */)acceptHandler;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned short)bleListenPSM;
- (unsigned short)bleListeningPSM;
- (long long)bluetoothState;
- (id /* block */)bluetoothStateChangedHandler;
- (id /* block */)configChangedHandler;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (void)pairingGenerateOOBDataForPeer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pairingSetOOBEnabled:(bool)arg1 peer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)setAcceptHandler:(id /* block */)arg1;
- (void)setBleListenPSM:(unsigned short)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setConfigChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;

@end
