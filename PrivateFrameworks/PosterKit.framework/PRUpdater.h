
@interface PRUpdater : NSObject <PRUpdatingService_toExtension> {
    <PRUpdatingDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_callOutBlocks;
    NSMutableSet * _lock_connections;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dequeueNextCallOutIfPossible;
- (void)_disconnect:(id)arg1;
- (void)_enqueueCallOut:(id /* block */)arg1;
- (void)captureSnapshotForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (oneway void)updateConfiguration:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)updateDescriptors:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;

@end
