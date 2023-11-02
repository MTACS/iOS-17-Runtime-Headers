
@interface SYBacklinkMonitorClient : NSObject <SYBacklinkMonitorClientProtocol> {
    NSObject<OS_dispatch_queue> * __clientQueue;
    NSXPCConnection * __connection;
    SYBacklinkFilterCache * __filterCache;
    NSMutableSet * __pendingCompletionBlocks;
    bool  __previousFilterCacheMatched;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_clientQueue;
@property (nonatomic, retain) NSXPCConnection *_connection;
@property (nonatomic, retain) SYBacklinkFilterCache *_filterCache;
@property (nonatomic, readonly) NSMutableSet *_pendingCompletionBlocks;
@property (nonatomic) bool _previousFilterCacheMatched;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientQueue;
- (void)_configureConnectionAndResume;
- (id)_connection;
- (void)_createConnectionIfNeeded;
- (id)_filterCache;
- (void)_invalidateConnection;
- (id)_pendingCompletionBlocks;
- (bool)_previousFilterCacheMatched;
- (void)_processNotifyActiveUserActivityDidChange:(id)arg1 context:(id)arg2 serviceProxy:(id)arg3 completion:(id /* block */)arg4;
- (void)createConnectionWithEndpoint:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)notifyActiveUserActivityDidChange:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)set_clientQueue:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)set_filterCache:(id)arg1;
- (void)set_previousFilterCacheMatched:(bool)arg1;
- (oneway void)updateWithFilterCache:(id)arg1;

@end
