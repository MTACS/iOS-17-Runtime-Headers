
@interface UISApplicationSupportService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface> {
    BSServiceConnectionListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    UISApplicationInitializationContext * _lock_defaultContext;
    <UISApplicationSupportServiceDelegate> * _lock_delegate;
    struct { 
        unsigned int defaultContext : 1; 
        unsigned int overrideInitialize : 1; 
        unsigned int initializeClientSync : 1; 
        unsigned int initializeClientSyncWithParameters : 1; 
        unsigned int initializeClientAsync : 1; 
        unsigned int initializeClientLegacy : 1; 
        unsigned int requestPasscodeUnlockUI : 1; 
        unsigned int destroyScenes : 1; 
    }  _lock_delegateFlags;
    bool  _lock_finishedLaunching;
    NSMutableArray * _lock_launchPendedRequests;
    bool  _lock_started;
    FBSSerialQueue * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy) UISApplicationInitializationContext *defaultContext;
@property (retain) <UISApplicationSupportServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasFinishedLaunching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_delegate;
- (id)_initWithDelegate:(id)arg1 targetQueue:(id)arg2;
- (void)_pendRequestUntilLaunch:(id /* block */)arg1;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (id)defaultContext;
- (id)delegate;
- (void)destroyScenesPersistentIdentifiers:(id)arg1 animationType:(id)arg2 destroySessions:(id)arg3 completion:(id /* block */)arg4;
- (bool)hasFinishedLaunching;
- (id)init;
- (id)initWithCalloutQueue:(id)arg1;
- (void)initializeClientWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)requestPasscodeUnlockUIWithCompletion:(id /* block */)arg1;
- (void)setDefaultContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
