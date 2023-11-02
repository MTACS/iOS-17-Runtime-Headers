
@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement> {
    bool  _excludesHiddenAlbum;
    bool  _isPhotosPicker;
    PHPhotoLibrary * _photoLibrary;
    bool  _registeredAsPrefObserver;
    NSMapTable * _sectionManagerByItemTypeForAccountStoreChange;
    NSMapTable * _sectionManagersByItemTypeForDefaultsChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool excludesHiddenAlbum;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPhotosPicker;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) bool registeredAsPrefObserver;
@property (nonatomic, readonly) NSMapTable *sectionManagerByItemTypeForAccountStoreChange;
@property (nonatomic, readonly) NSMapTable *sectionManagersByItemTypeForDefaultsChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2 setupObservation:(bool)arg3;
- (void)_observeAccountsStoreForManager:(id)arg1 enablementItem:(long long)arg2;
- (void)_observeDefaultsForManager:(id)arg1 enablementItem:(long long)arg2;
- (void)configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2;
- (void)dealloc;
- (bool)excludesHiddenAlbum;
- (id)initWithPhotoLibrary:(id)arg1 isPhotosPicker:(bool)arg2 excludesHiddenAlbum:(bool)arg3;
- (bool)isPhotosPicker;
- (id)photoLibrary;
- (void)preferencesDidChange;
- (bool)registeredAsPrefObserver;
- (id)sectionManagerByItemTypeForAccountStoreChange;
- (id)sectionManagersByItemTypeForDefaultsChange;
- (void)setRegisteredAsPrefObserver:(bool)arg1;

@end
