
@interface BAGResourceVendor : NSObject <BAGXPCProtocolClient> {
    IDSXPCDaemonController * _daemonController;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _updateBlocksByOptions;
    NSUUID * _vendorID;
}

@property (nonatomic, retain) IDSXPCDaemonController *daemonController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *updateBlocksByOptions;
@property (nonatomic, retain) NSUUID *vendorID;

- (void).cxx_destruct;
- (void)_calloutToBlocksForOptions:(id)arg1 withResource:(id)arg2 andContext:(id)arg3;
- (void)_handleInterruption;
- (void)_performCancelForOptions:(id)arg1;
- (void)_performFetchForOptions:(id)arg1;
- (id)daemonController;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 daemonController:(id)arg2;
- (id)queue;
- (void)resourceUpdated:(id)arg1 forOptions:(id)arg2 withContext:(id)arg3;
- (void)setDaemonController:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUpdateBlocksByOptions:(id)arg1;
- (void)setVendorID:(id)arg1;
- (void)stopTrackingResourceForOptions:(id)arg1;
- (void)trackResourceForOptions:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)updateBlocksByOptions;
- (id)vendorID;

@end
