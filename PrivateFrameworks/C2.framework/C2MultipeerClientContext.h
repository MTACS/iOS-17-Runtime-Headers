
@interface C2MultipeerClientContext : NSObject {
    id /* block */  _chunkDataCallback;
    NSString * _chunkDataRequestedFromPeer;
    NSMutableSet * _discoveryPeers;
    bool  _hasReplied;
    NSObject<OS_os_activity> * _osActivity;
    unsigned long long  _startTimestamp;
    NSObject<OS_dispatch_source> * _timeoutTrigger;
}

@property (nonatomic, copy) id /* block */ chunkDataCallback;
@property (nonatomic, retain) NSString *chunkDataRequestedFromPeer;
@property (nonatomic, retain) NSMutableSet *discoveryPeers;
@property (nonatomic) bool hasReplied;
@property (nonatomic, retain) NSObject<OS_os_activity> *osActivity;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTrigger;

- (void).cxx_destruct;
- (id /* block */)chunkDataCallback;
- (id)chunkDataRequestedFromPeer;
- (id)discoveryPeers;
- (bool)hadFailedToDiscover;
- (bool)hasReplied;
- (id)init;
- (id)osActivity;
- (void)resetTimerForChunkData;
- (void)resetTimerForDiscovery;
- (void)setChunkDataCallback:(id /* block */)arg1;
- (void)setChunkDataRequestedFromPeer:(id)arg1;
- (void)setDiscoveryPeers:(id)arg1;
- (void)setHasReplied:(bool)arg1;
- (void)setOsActivity:(id)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setTimeoutTrigger:(id)arg1;
- (void)startTimerOnQueue:(id)arg1;
- (unsigned long long)startTimestamp;
- (void)stopTimer;
- (id)timeoutTrigger;

@end
