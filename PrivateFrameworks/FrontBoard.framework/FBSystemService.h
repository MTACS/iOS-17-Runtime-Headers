
@interface FBSystemService : NSObject <BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _defaultInfoProviderLock;
    <FBSystemServiceDelegate> * _delegate;
    BSServiceConnectionListener * _legacyOpenServiceListener;
    <FBSApplicationInfoProvider> * _lock_defaultInfoProvider;
    int  _pendingExit;
    FBSSerialQueue * _queue;
    FBServiceFacilityServer * _server;
}

@property (nonatomic, readonly) <FBSApplicationInfoProvider> *_applicationInfoProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSystemServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPendingExit, readonly) bool pendingExit;
@property (nonatomic, readonly) FBSSerialQueue *queue;
@property (nonatomic, retain) FBServiceFacilityServer *server;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_activateBundleID:(id)arg1 requestID:(id)arg2 isTrusted:(bool)arg3 options:(id)arg4 source:(id)arg5 originalSource:(id)arg6 withResult:(id /* block */)arg7;
- (id)_applicationInfoProvider;
- (bool)_isAllowListedLaunchSuspendedApp:(id)arg1;
- (bool)_isTrustedRequest:(id)arg1 forCaller:(id)arg2 fromClient:(id)arg3 forBundleInfo:(id)arg4 withOptions:(id)arg5 fatalError:(out id*)arg6;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)arg1;
- (void)_performExitTasksForRelaunch:(bool)arg1;
- (void)_reallyActivateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(bool)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(id /* block */)arg11;
- (void)_setInfoProvider;
- (bool)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_terminateProcesses:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)canOpenApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)exitAndRelaunch:(bool)arg1;
- (void)exitAndRelaunch:(bool)arg1 withOptions:(unsigned long long)arg2;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(id /* block */)arg3;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)isPasscodeLockedOrBlockedWithResult:(id /* block */)arg1;
- (bool)isPendingExit;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)openApplication:(id)arg1 withOptions:(id)arg2 originator:(id)arg3 requestID:(id)arg4 completion:(id /* block */)arg5;
- (void)prepareDisplaysForExit;
- (void)prepareForExitAndRelaunch:(bool)arg1;
- (id)queue;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setPendingExit:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setSystemIdleSleepDisabled:(bool)arg1 forReason:(id)arg2;
- (void)shutdownAndReboot:(bool)arg1;
- (void)shutdownUsingOptions:(id)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2;
- (void)shutdownWithOptions:(id)arg1 origin:(id)arg2;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;

@end
