
@interface BLDownloadQueueServerProgressObserver : NSObject <BLProgressReceiving, BLServiceProxyConnectionMonitoring> {
    NSMutableDictionary * _activeDownloads;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeDownloadsLock;
    BLDownloadQueueNonUI * _downloadQueue;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    BLServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) NSMutableDictionary *activeDownloads;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BLDownloadQueueNonUI *downloadQueue;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) BLServiceProxy *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateFromObject:(id)arg1;
- (id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(bool*)arg2;
- (id)_downloadStatusStoreID:(id)arg1 storePlaylistID:(id)arg2 orPermLink:(id)arg3 downloadID:(id)arg4 title:(id)arg5 collectionTitle:(id)arg6 assetKind:(id)arg7 isPaused:(bool)arg8;
- (id)_numberFromObject:(id)arg1;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(bool)arg2;
- (void)_postDownloadProgressNotificationWithDictionary:(id)arg1;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1;
- (id)_stringFromObject:(id)arg1;
- (id)activeDownloads;
- (void)cancelAllPausedDownloads;
- (void)dealloc;
- (void)didFailWithUserInfo:(id)arg1;
- (void)downloadCompleteWithUserInfo:(id)arg1;
- (id)downloadQueue;
- (id)downloads;
- (id)initWithDownloadQueue:(id)arg1;
- (void)notifyDidCompleteForDownloadID:(id)arg1;
- (void)notifyPurchaseAttemptForRequest:(id)arg1;
- (id)observers;
- (void)progressWithUserInfo:(id)arg1;
- (void)purchaseDidCompleteWithResponse:(id)arg1;
- (void)purchaseDidFailedWithResponse:(id)arg1;
- (void)purchaseFailedWithUserInfo:(id)arg1;
- (void)purchaseSucceededWithUserInfo:(id)arg1;
- (void)reconnectingToServiceForProxy:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)sendCancelCompletionNotificationForDownloadWithDownloadID:(id)arg1;
- (void)sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 storePlaylistID:(id)arg2 orPermlink:(id)arg3 downloadID:(id)arg4 title:(id)arg5 collectionTitle:(id)arg6 assetKind:(id)arg7 isPaused:(bool)arg8 targetObserver:(id)arg9;
- (id)serviceProxy;
- (void)setActiveDownloads:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
