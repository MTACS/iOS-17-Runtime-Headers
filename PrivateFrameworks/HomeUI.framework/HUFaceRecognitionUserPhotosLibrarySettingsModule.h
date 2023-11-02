
@interface HUFaceRecognitionUserPhotosLibrarySettingsModule : HFItemModule {
    HFItemProvider * _allowPhotosLibraryAccessItemProvider;
    HMHome * _home;
    NSSet * _itemProviders;
    HFStaticItem * _photoLibraryAccessEveryoneInThisHome;
    HFStaticItem * _photoLibraryAccessNever;
    HFStaticItem * _photoLibraryAccessOnlyMe;
    bool  _shouldUseProxCardPresentationStyle;
}

@property (nonatomic, retain) HFItemProvider *allowPhotosLibraryAccessItemProvider;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFStaticItem *photoLibraryAccessEveryoneInThisHome;
@property (nonatomic, retain) HFStaticItem *photoLibraryAccessNever;
@property (nonatomic, retain) HFStaticItem *photoLibraryAccessOnlyMe;
@property (nonatomic) bool shouldUseProxCardPresentationStyle;

- (void).cxx_destruct;
- (id)_updatePhotosLibrarySettingsForItem:(id)arg1;
- (id)allowPhotosLibraryAccessItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)photoLibraryAccessEveryoneInThisHome;
- (id)photoLibraryAccessNever;
- (id)photoLibraryAccessOnlyMe;
- (void)setAllowPhotosLibraryAccessItemProvider:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPhotoLibraryAccessEveryoneInThisHome:(id)arg1;
- (void)setPhotoLibraryAccessNever:(id)arg1;
- (void)setPhotoLibraryAccessOnlyMe:(id)arg1;
- (void)setShouldUseProxCardPresentationStyle:(bool)arg1;
- (bool)shouldUseProxCardPresentationStyle;

@end
