
@interface SBSystemApertureLayoutMonitorServer : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientServiceCollectionLock;
    BSServiceConnectionListener * _connectionListener;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableArray * _connections;
    NSArray * _frames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _framesCollectionLock;
    bool  _isValid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyConnectedListenersOfUpdatedFrames;
- (void)_systemApertureLayoutDidChange:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
