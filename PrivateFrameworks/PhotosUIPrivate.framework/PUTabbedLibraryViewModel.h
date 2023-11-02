
@interface PUTabbedLibraryViewModel : NSObject {
    PUTabbedLibrarySettings * _settings;
    NSArray * _tabInfos;
}

@property (nonatomic, readonly) PUTabbedLibrarySettings *settings;
@property (nonatomic, readonly) NSArray *tabInfos;

+ (id)viewModelWithDefaultParameters;

- (void).cxx_destruct;
- (bool)_ppt_shouldShowBlankTab;
- (bool)_ppt_shouldShowNilTab;
- (bool)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)settings;
- (id)tabInfoForContentMode:(int)arg1;
- (id)tabInfos;
- (bool)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2;
- (id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2;

@end
