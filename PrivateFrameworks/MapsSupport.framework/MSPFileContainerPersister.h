
@interface MSPFileContainerPersister : MSPContainerPersister {
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSURL * _persistenceFileURL;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic, readonly) NSURL *persistenceFileURL;

- (void).cxx_destruct;
- (id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(id /* block */)arg1 error:(out id*)arg2;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(id /* block */)arg4;
- (void)eraseWithCompletion:(id /* block */)arg1;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)arg1;
- (bool)getSnapshot:(out id*)arg1 data:(out id*)arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id*)arg6;
- (bool)getSnapshot:(out id*)arg1 data:(out id*)arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id*)arg6;
- (id)init;
- (id)initWithPersistenceFileAtURL:(id)arg1;
- (id)ioQueue;
- (id)newStateSnapshot;
- (id)persistenceFileURL;
- (void)setIoQueue:(id)arg1;
- (id)stateSnapshotFromData:(id)arg1;

@end
