
@interface SKHelperClient : NSObject <SKDaemonProtocol, SKHelperClientProtocol> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _completionBlockDictionary;
    NSXPCConnection * _connection;
    NSMutableDictionary * _errorBlockDictionary;
    bool  _isInvalidated;
    id /* block */  _progressBlock;
    NSMutableDictionary * _progressBlockDictionary;
    NSMutableDictionary * _recacheAbuseLimiterInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *recacheAbuseLimiterInfo;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (bool)_isRecachingDiskAbuse:(id)arg1;
- (void)_markConnectionInvalidAndCallAllCallbacks;
- (id)_parameters:(id)arg1 valueAtIndex:(unsigned long long)arg2;
- (void)_scheduleCompletionUUID:(id)arg1 forFunction:(const char *)arg2 withBlock:(id /* block */)arg3;
- (void)_setProgressHandler:(id /* block */)arg1 forUUID:(id)arg2;
- (id)_xpcConnection;
- (void)childDisksForWholeDisk:(id)arg1 withCallbackBlock:(id /* block */)arg2;
- (void)diskForPath:(id)arg1 withCallbackBlock:(id /* block */)arg2;
- (id)diskNotificationQueue;
- (void)disksAppeared:(id)arg1;
- (void)disksChanged:(id)arg1;
- (void)disksDisappeared:(id)arg1;
- (void)ejectDisk:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)eraseWithEraser:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)filesystemsWithCallbackBlock:(id /* block */)arg1;
- (id)init;
- (void)initialPopulateComplete;
- (void)isBusy:(id /* block */)arg1;
- (void)managerResumed;
- (void)managerStalled;
- (void)mountDisk:(id)arg1 options:(id)arg2 connection:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)physicalStoresForAPFSVolume:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)recacheAbuseLimiterInfo;
- (void)recacheDisk:(id)arg1 options:(unsigned long long)arg2 callbackBlock:(id /* block */)arg3;
- (id)remoteObjectWithUUID:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)renameDisk:(id)arg1 to:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)requestWithUUID:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)setDaemonOptionsWithLanguage:(id)arg1 authRef:(unsigned char)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)setRecacheAbuseLimiterInfo:(id)arg1;
- (void)syncAllDisksWithCompletionBlock:(id /* block */)arg1;
- (id)synchronousRemoteObjecUUID:(id)arg1 tWithErrorHandler:(id /* block */)arg2;
- (void)unmountDisk:(id)arg1 options:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)unmountDisk:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)updateUUID:(id)arg1 progress:(float)arg2 message:(id)arg3;
- (void)volumesForAPFSPS:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)wholeDiskForDisk:(id)arg1 withCallbackBlock:(id /* block */)arg2;

@end
