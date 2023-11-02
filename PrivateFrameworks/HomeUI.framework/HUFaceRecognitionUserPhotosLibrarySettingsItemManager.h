
@interface HUFaceRecognitionUserPhotosLibrarySettingsItemManager : HFItemManager {
    HFStaticItem * _addNamesInPhotosLibraryItem;
    HMHome * _overrideHome;
    HUFaceRecognitionUserPhotosLibrarySettingsModule * _photosLibrarySettingsModule;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HFStaticItem *addNamesInPhotosLibraryItem;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, readonly) HUFaceRecognitionUserPhotosLibrarySettingsModule *photosLibrarySettingsModule;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)addNamesInPhotosLibraryItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)overrideHome;
- (id)photosLibrarySettingsModule;
- (void)setAddNamesInPhotosLibraryItem:(id)arg1;
- (id)setImportPhotosLibraryEnabled:(bool)arg1;
- (id)setSharePhotosLibraryEnabled:(bool)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)user;

@end
