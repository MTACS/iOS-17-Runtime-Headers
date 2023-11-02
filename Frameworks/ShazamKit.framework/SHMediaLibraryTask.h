
@interface SHMediaLibraryTask : NSObject <SHMediaLibrarySyncDelegate, SHRemoteMediaLibrary> {
    NSUUID * _identifier;
    <SHRemoteMediaLibrary> * _remoteLibrary;
    id /* block */  _syncCompletionBlock;
    NSError * _syncError;
    <SHMediaLibrarySyncDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMediaLibrarySyncDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) <SHRemoteMediaLibrary> *remoteLibrary;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ syncCompletionBlock;
@property (nonatomic, retain) NSError *syncError;

- (void).cxx_destruct;
- (void)_initWithRemoteLibrary:(id)arg1;
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;
- (void)_libraryDidCompleteSync:(id)arg1;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_libraryWillBeginSync:(id)arg1;
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;
- (id)delegate;
- (id)identifier;
- (id)init;
- (id)remoteLibrary;
- (void)setDelegate:(id)arg1;
- (void)setRemoteLibrary:(id)arg1;
- (void)setSyncCompletionBlock:(id /* block */)arg1;
- (void)setSyncError:(id)arg1;
- (id /* block */)syncCompletionBlock;
- (id)syncError;

@end
