
@interface _DKSyncPeerInfo : NSObject {
    _DKSyncPeer * _peer;
    long long  _transports;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end
