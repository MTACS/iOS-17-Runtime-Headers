
@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    BSServiceConnection * _connection;
    BSServiceConnectionEndpoint * _endpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_keyedObservers;
    FBSDisplayLayout * _lock_layout;
    unsigned long long  _lock_layoutGeneration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1 qos:(BOOL)arg2;
- (void)addObserver:(id /* block */)arg1 forKey:(id)arg2;
- (id)currentLayout;
- (void)dealloc;
- (id)endpoint;
- (void)invalidate;
- (void)removeObserverForKey:(id)arg1;
- (oneway void)updateLayout:(id)arg1 withTransition:(id)arg2;

@end
