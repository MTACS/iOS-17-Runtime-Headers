
@interface PLCacheDeleteRegistration : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSMutableDictionary * _cacheDeleteSupportByLibraryURL;
    PFCameraViewfinderSessionWatcher * _cameraWatcher;
    NSMutableDictionary * _fileIDsAndPurgedPathsReceivedWhileCameraIsStreamingPerLibrary;
    NSMutableDictionary * _notificationIDsByLibraryURL;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cacheDeleteUrgencySpecialCasePhotoLibrary;
+ (void)registerDefaultHandlers;
+ (void)registerSpecialCaseHandler;

- (void).cxx_destruct;
- (id)_getInternalQueue;
- (void)_processRemovedFiles:(id)arg1 withCacheDeleteSupport:(id)arg2 forLibraryURL:(id)arg3;
- (void)_registerResourceDirectories;
- (void)_replaceCameraWatcherWith:(id)arg1;
- (void)_setCacheDeleteSupport:(id)arg1 forLibrary:(id)arg2;
- (void)cameraWatcherDidChangeState:(id)arg1;
- (id)init;
- (void)registerCacheDeleteSupport:(id)arg1 withLibraryServicesManager:(id)arg2;
- (void)unregisterCacheDeleteSupport:(id)arg1 withLibraryServicesManager:(id)arg2;

@end
