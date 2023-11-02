
@interface NTKFaceSnapshotClient : NSObject <NTKFaceSnapshotClient> {
    NSXPCConnection * _daemonConnection;
    bool  _registrationNeeded;
    NSObject<OS_dispatch_queue> * _snapshotFileQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_askDaemonForSnapshotOfDescriptor:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_askXPCServiceForSnapshotOfDescriptor:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleActiveDeviceChangedNotification;
- (void)_handleConnectionInterrupted;
- (void)_handleCustomMonogramChangedNotification;
- (void)_handleSignificantLocationChangeNotification;
- (void)_register;
- (void)_registerIfNeeded;
- (void)_setupDaemonConnection;
- (void)_updateAllSnapshots;
- (void)dealloc;
- (void)faceSnapshotChangedForKey:(id)arg1;
- (id)init;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(id /* block */)arg1;
- (void)requestSnapshotOfFace:(id)arg1;
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)synchronouslyUpdateAllSnapshots;

@end
