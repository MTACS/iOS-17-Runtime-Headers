
@interface PXCPLStatusProvider : PXObservable <PXCPLStatusProvider, PXChangeObserver, PXFetchResultCountObserverDelegate> {
    bool  _cloudQuotaOfferHasAssetCounts;
    PXCPLCloudQuotaSource * _cloudQuotaSource;
    PXCPLStatusSource * _cplStatusSource;
    bool  _hasCloudQuotaOffer;
    bool  _isUpdating;
    double  _lastUpdate;
    unsigned long long  _needsUpdate;
    unsigned long long  _numberOfReferencedItems;
    PXFetchResultCountObserver * _numberOfReferencedItemsObserver;
    PXCloudQuotaOfferProvider * _offerProvider;
    PHPhotoLibrary * _photoLibrary;
    PXCPLPhotoLibrarySource * _photoLibrarySource;
    PXCloudQuotaPremiumOfferProvider * _premiumOfferProvider;
    NSObject<OS_dispatch_queue> * _serialUpdateQueue;
    PXCPLSharedLibraryActivity * _sharedLibraryActivity;
    PXCPLStatus * _status;
    PXCPLSyncActivity * _syncActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXCPLStatus *status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_main_handleUpdatedStatus:(id)arg1 producedForUpdateType:(unsigned long long)arg2 timeIntervalProducingUpdatedStatus:(double)arg3;
- (void)_performUpdate;
- (void)_queue_performUpdateWithStatus:(id)arg1 updateType:(unsigned long long)arg2;
- (void)_schedulePendingUpdates;
- (void)_scheduleUpdateForType:(unsigned long long)arg1;
- (void)_setStatus:(id)arg1 producedForUpdateType:(unsigned long long)arg2 timeIntervalProducingUpdatedStatus:(double)arg3;
- (id)_updateStatus:(id)arg1 requestedTypes:(unsigned long long)arg2;
- (void)fetchResultCountObserver:(id)arg1 didChangeFetchResultCount:(long long)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (double)nextOverrideResumeTimeInterval;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)status;

@end
