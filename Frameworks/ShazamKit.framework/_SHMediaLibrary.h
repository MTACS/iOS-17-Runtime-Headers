
@interface _SHMediaLibrary : NSObject <SHMediaLibrarySyncDelegate, SHRemoteMediaLibrary> {
    NSMutableDictionary * _inflightTasks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inflightTasksLock;
    <SHMediaLibrarySyncDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMediaLibrarySyncDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *inflightTasks;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } inflightTasksLock;
@property (readonly) Class superclass;

+ (id)_defaultLibrary;

- (void).cxx_destruct;
- (void)_addMediaItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;
- (void)_libraryDidCompleteSync:(id)arg1;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_libraryInfoWithTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_libraryWillBeginSync:(id)arg1;
- (void)_queryLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queryLibraryWithTask:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_synchronize;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_synchronizeTask:(id)arg1 snapshot:(id)arg2 startCondition:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addInflightTask:(id)arg1;
- (id)delegate;
- (id)inflightTasks;
- (struct os_unfair_lock_s { unsigned int x1; })inflightTasksLock;
- (id)init;
- (void)removeInflightTask:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInflightTasks:(id)arg1;
- (void)setInflightTasksLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
