
@interface DSRemotePairingWrapper : NSObject {
    _TtC15DSRemotePairing15DSRemotePairing * _remotePairing;
}

@property (nonatomic, retain) _TtC15DSRemotePairing15DSRemotePairing *remotePairing;

- (void).cxx_destruct;
- (id)getPairedDevicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)remotePairing;
- (void)removeAllPairedDevicesOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeSelectedDevices:(id)arg1 onQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setRemotePairing:(id)arg1;

@end
