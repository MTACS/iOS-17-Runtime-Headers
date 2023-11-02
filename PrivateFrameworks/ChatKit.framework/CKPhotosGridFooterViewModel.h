
@interface CKPhotosGridFooterViewModel : PXFooterViewModel <IMPhotoLibraryPersistenceManagerListener, PXChangeObserver> {
    PXAssetsDataSourceCountsController * _assetsCountsController;
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _detailedCounts;
    long long  _savedCount;
    NSArray * _syndicationIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDetailedCounts;
- (void)_updateSavedCount;
- (id)initAssetsDataSourceManager:(id)arg1 syndicationIdentifiers:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryPersistedSyndicatedAssetSetDidChange;
- (void)setDetailedCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSavedCount:(long long)arg1;

@end
