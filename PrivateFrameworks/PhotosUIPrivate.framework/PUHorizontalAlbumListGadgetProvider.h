
@interface PUHorizontalAlbumListGadgetProvider : PXGadgetProvider <PXChangeObserver, PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver> {
    PUAlbumsGadgetProvider * _albumsGadgetProvider;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PHPhotoLibrary * _photoLibrary;
    PUSessionInfo * _sessionInfo;
    NSString * _title;
    PXExtendedTraitCollection * _traitCollection;
    unsigned long long  _type;
}

@property (nonatomic, retain) PUAlbumsGadgetProvider *albumsGadgetProvider;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (bool)_canProvideGadgets;
- (id)_fromMyMacConfiguration;
- (void)_handleDataSourceChange;
- (id)_newConfiguration;
- (id)_newRootConfiguration;
- (void)_resetGadgets;
- (id)_seeAllViewController;
- (id)albumsGadgetProvider;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 sessionInfo:(id)arg3 photoLibrary:(id)arg4;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pauseLoadingRemainingData;
- (id)photoLibrary;
- (id)sessionInfo;
- (void)setAlbumsGadgetProvider:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)startLoadingRemainingData;
- (id)title;
- (id)traitCollection;
- (unsigned long long)type;

@end
