
@interface SHMediaLibrary : NSObject <SHMediaLibrary, SHMediaLibrarySyncDelegate> {
    _SHMediaLibrary * _underlyingLibrary;
    <SHMediaLibrarySyncDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMediaLibrarySyncDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SHMediaLibrary *underlyingLibrary;

+ (id)defaultLibrary;

- (void).cxx_destruct;
- (id)_init;
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;
- (void)_libraryDidCompleteSync:(id)arg1;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_libraryWillBeginSync:(id)arg1;
- (void)_queryLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_synchronize;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setUnderlyingLibrary:(id)arg1;
- (id)underlyingLibrary;

@end
