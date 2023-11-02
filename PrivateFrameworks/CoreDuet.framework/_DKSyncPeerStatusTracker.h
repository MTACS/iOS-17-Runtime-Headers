
@interface _DKSyncPeerStatusTracker : _DKSyncContextObject {
    NSDate * _firstForeignPeersCountDate;
    NSMutableDictionary * _lastSuccessfulActivityDates;
    NSMutableArray * _observers;
    NSMutableDictionary * _peerInfos;
    _DKSyncPeer * _pseudoPeer;
    _DKKnowledgeStorage * _storage;
}

@property (nonatomic) _DKKnowledgeStorage *storage;

+ (id)peerStatusTrackerWithContext:(id)arg1;
+ (id)sharedInstance;
+ (id)stringForTransports:(long long)arg1;

- (void).cxx_destruct;
- (long long)activeTransportsForPeer:(id)arg1;
- (void)addActiveTransports:(long long)arg1 toPeer:(id)arg2;
- (id)addStatusChangeObserverWithBlock:(id /* block */)arg1;
- (id)allPeers;
- (void)debugLogPeers;
- (id)description;
- (id)existingPeerWithIDSDeviceIdentifier:(id)arg1;
- (id)existingPeerWithSourceDeviceID:(id)arg1;
- (unsigned long long)foreignPeersCount;
- (id)initWithContext:(id)arg1;
- (bool)isSingleDevice;
- (id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2;
- (id)peerWithCompanionLinkDevice:(id)arg1;
- (id)peerWithIDSDeviceIdentifier:(id)arg1;
- (id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2;
- (id)peersWithActiveTransports:(long long)arg1;
- (id)peersWithAnyActiveTransports;
- (id)pseudoPeerForSyncTransportCloudUp;
- (void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2;
- (void)removePeer:(id)arg1;
- (void)removeStatusChangeObserver:(id)arg1;
- (void)setLastSeenDate:(id)arg1 onPeer:(id)arg2;
- (void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3;
- (void)setSourceDeviceID:(id)arg1 version:(id)arg2 peer:(id)arg3;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
