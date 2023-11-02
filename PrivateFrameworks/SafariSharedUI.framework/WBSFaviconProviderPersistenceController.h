
@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate> {
    NSURL * _baseURL;
    long long  _controllerState;
    NSURL * _databaseURL;
    NSURL * _diskCacheURL;
    WBSFaviconProviderDatabaseController * _faviconDatabase;
    WBSOnDiskDataCache * _faviconDiskCache;
    NSMapTable * _inMemoryImageCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isReadOnly;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredIconSize;
    WBSFaviconProviderPrivateCache * _privateCache;
    WBSFaviconProviderRecordCache * _recordsCache;
    id /* block */  _setUpCompletionHandler;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *diskCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1;
- (void)_finishSetUpWithStatus:(long long)arg1;
- (void)_iconForIconUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_imageFromURL:(id)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)dataCacheDidSetUp:(id)arg1;
- (id)databaseURL;
- (id)diskCacheURL;
- (void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)arg1;
- (void)iconForIconURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconForPageURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 isReadOnly:(bool)arg4;
- (void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)openAndCheckIntegrity:(bool)arg1 createIfNeeded:(bool)arg2 fallBackToMemoryStoreIfError:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)rejectedResourceInfosForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)removeAllIconsWithCompletionHandler:(id /* block */)arg1;
- (void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)removeIconWithPageURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)savePendingChangesBeforeTermination;
- (void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize { double x1; double x2; })arg4 hasGeneratedResolutions:(bool)arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)setIconIsRejectedResource:(bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1;

@end
