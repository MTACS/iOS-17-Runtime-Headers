
@interface WBSFaviconProvider : NSObject <WBSSiteMetadataProvider, WBSWebViewMetadataFetchOperationDelegate> {
    NSArray * _allIconScales;
    NSURL * _baseURL;
    NSCalendar * _calendar;
    double  _expirationInterval;
    NSMutableDictionary * _hostsToRequestsMap;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _internalSavingQueue;
    bool  _isReadOnly;
    WBSFaviconProviderPersistenceController * _persistenceController;
    double  _preferredIconScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredIconSize;
    unsigned long long  _privateDataRetentionCount;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    long long  _providerState;
    NSCache * _responseCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledPreferredIconSize;
    id /* block */  _shouldCheckIntegrityWhenOpeningDatabaseBlock;
    NSMutableDictionary * _urlsToFaviconRecordsSavedDuringMigration;
}

@property (nonatomic, readonly, copy) NSArray *allIconScales;
@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) double preferredIconScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredIconSize;
@property <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })defaultFaviconSize;

- (void).cxx_destruct;
- (void)_addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)_atomicallyLinkPageURLs:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(bool)arg3;
- (void)_atomicallySaveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (id /* block */)_blockOperationForRequest:(id)arg1;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)_confirmImageDataShouldBeSaved:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 pageURL:(id)arg3 iconURL:(id)arg4 includingPrivateData:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)_getIconForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_hostFromRequest:(id)arg1;
- (id)_hostFromURL:(id)arg1;
- (bool)_isIconDateExpired:(id)arg1;
- (void)_linkPageURL:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(bool)arg2;
- (void)_registerRequest:(id)arg1;
- (void)_removeCachedResponsesForRequest:(id)arg1;
- (void)_removeCachedResponsesForURL:(id)arg1;
- (id)_requestsForHost:(id)arg1;
- (id)_responseCacheKeyForRequest:(id)arg1;
- (id)_responseDictionaryKeyForRequest:(id)arg1;
- (void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)_updateOutstandingRequestsAfterSuccessfulSetup;
- (void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(bool)arg2;
- (id)allIconScales;
- (id)baseURL;
- (id)builtInIconForRequest:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (void)cleanUpAfterPersistenceSetUpDidSucceed:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)emptyCaches;
- (id)fallbackIconForRequest:(id)arg1;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)arg1;
- (void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)arg7;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 atScale:(double)arg4 allScales:(id)arg5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)arg6;
- (bool)isReadOnly;
- (void)linkIconFromPageURL:(id)arg1 toCurrentPageURL:(id)arg2 isPrivate:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)persistenceController;
- (double)preferredIconScale;
- (struct CGSize { double x1; double x2; })preferredIconSize;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (long long)providerState;
- (bool)providesFavicons;
- (void)releasePrivateData;
- (void)removeAllIconsForURLStringsNotIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeIconForURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)retainPrivateData;
- (void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)savePendingChangesBeforeTermination;
- (void)setProviderDelegate:(id)arg1;
- (void)setUpPersistenceAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setUpWithCompletionHandler:(id /* block */)arg1;
- (void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 isPrivate:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(struct CGSize { double x1; double x2; })arg2 withConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;

@end
