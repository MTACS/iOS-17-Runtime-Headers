
@interface BLDownloadQueueNonUI : NSObject <BUAccountsObserving> {
    BLDownloadQueueServerProgressObserver * _serverProgressObserver;
    BLServiceProxy * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BLDownloadQueueServerProgressObserver *serverProgressObserver;
@property (nonatomic, retain) BLServiceProxy *serviceProxy;
@property (readonly) Class superclass;

+ (void)cancelAllActiveDownloads;
+ (id)innerSharedInstance;
+ (void)overrideSharedInstance:(id)arg1;
+ (void)prepareForRemoveApp;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addDownloadWithMetadata:(id)arg1 isRestore:(bool)arg2 completion:(id /* block */)arg3;
- (void)_cancelAllPausedDownloads;
- (id)_dateFromObject:(id)arg1;
- (id)_numberFromObject:(id)arg1;
- (void)_purchaseWithRequest:(id)arg1 uiHostProxy:(id)arg2 completion:(id /* block */)arg3;
- (id)_stringFromObject:(id)arg1;
- (void)account:(unsigned long long)arg1 didChangeWithReason:(unsigned long long)arg2;
- (void)addDownloadWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)addDownloadWithPurchaseParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(id /* block */)arg3;
- (void)addDownloadsWithManifestRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadsWithRestoreContentRequestItems:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)addRestoreDownloadWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllActiveDownloadsWithCompletion:(id /* block */)arg1;
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)downloads;
- (id)init;
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)processAutomaticDownloadsWithReply:(id /* block */)arg1;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(id /* block */)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(bool)arg3 completion:(id /* block */)arg4;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(bool)arg3 userInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)purchaseWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadFromServerWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)restartDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)serverProgressObserver;
- (id)serviceProxy;
- (void)setServiceProxy:(id)arg1;

@end
