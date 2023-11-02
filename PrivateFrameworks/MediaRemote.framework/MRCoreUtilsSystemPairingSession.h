
@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)pairingManager;
+ (bool)systemPairingAvailable;

- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate { }*)arg1;
- (id)mediaRemotePairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)removePeer;
- (bool)shouldAutoRetryPairingExchange:(id)arg1;
- (id)updatePeer;

@end
