
@interface TVRCSiriRemoteFindingManager : NSObject {
    TVRCSiriRemoteConnectionManager * _connectionManager;
    NSTimer * _heartbeatTimer;
    TVRCSiriRemoteInfo * _pairedRemoteInfo;
    bool  _shouldLoadCachedRemoteInfo;
    TVRCRPCompanionLinkClientWrapper * _wrapper;
}

@property (nonatomic, retain) TVRCSiriRemoteConnectionManager *connectionManager;
@property (nonatomic, retain) NSTimer *heartbeatTimer;
@property (nonatomic, retain) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (nonatomic) bool shouldLoadCachedRemoteInfo;
@property (nonatomic) TVRCRPCompanionLinkClientWrapper *wrapper;

- (void).cxx_destruct;
- (id)_cachedRemoteInfoForRPDevice:(id)arg1;
- (void)_fetchPairedRemoteInfoAndStartMonitoring;
- (void)_saveRemoteInfoToUserDefaultsIfNeeded;
- (void)_startHeartbeatTimer;
- (void)_startMonitoringPairedRemoteInfo;
- (void)_stopHeartbeatTimer;
- (void)_updatePairedRemoteInfo:(id)arg1;
- (id)connectionManager;
- (void)dealloc;
- (void)enableFindingSession:(bool)arg1;
- (id)heartbeatTimer;
- (id)initWithCompanionLinkClientWrapper:(id)arg1;
- (id)pairedRemoteInfo;
- (void)setConnectionManager:(id)arg1;
- (void)setHeartbeatTimer:(id)arg1;
- (void)setPairedRemoteInfo:(id)arg1;
- (void)setShouldLoadCachedRemoteInfo:(bool)arg1;
- (void)setWrapper:(id)arg1;
- (bool)shouldLoadCachedRemoteInfo;
- (id)wrapper;

@end
