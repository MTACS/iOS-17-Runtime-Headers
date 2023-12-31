
@protocol CUPairingManagerXPCInterface

@optional

- (void)pairedPeerAdded:(CUPairedPeer *)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerChanged:(CUPairedPeer *)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerRemoved:(CUPairedPeer *)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityCreated:(CUPairingIdentity *)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;

@end
