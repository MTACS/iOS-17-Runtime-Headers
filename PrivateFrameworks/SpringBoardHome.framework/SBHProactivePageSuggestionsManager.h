
@interface SBHProactivePageSuggestionsManager : NSObject {
    SBHIconManager * _iconManager;
    SBRootFolder * _rootFolder;
    ATXSuggestedPagesClient * _suggestedPagesClient;
}

@property (nonatomic) SBHIconManager *iconManager;
@property (nonatomic) SBRootFolder *rootFolder;
@property (nonatomic, retain) ATXSuggestedPagesClient *suggestedPagesClient;

- (void).cxx_destruct;
- (void)_addLeafIcons:(id)arg1 toList:(id)arg2 iconModel:(id)arg3 rootFolder:(id)arg4 snapshot:(bool)arg5;
- (void)_addSuggestedPage:(id)arg1 atIndex:(unsigned long long)arg2 forSnapshot:(bool)arg3 focusMode:(id)arg4;
- (void)_addSuggestedPageWithPageType:(id)arg1 focusModeIdentifier:(id)arg2;
- (id)_iconForATXHomeScreenApp:(id)arg1 iconModel:(id)arg2 rootFolder:(id)arg3;
- (void)addSuggestedPages:(id)arg1 withFocusModeIdentifier:(id)arg2 forSnapshot:(bool)arg3 completion:(id /* block */)arg4;
- (id)iconManager;
- (id)initWithIconManager:(id)arg1;
- (id)initWithIconManager:(id)arg1 overridingRootFolder:(id)arg2;
- (id)rootFolder;
- (void)setIconManager:(id)arg1;
- (void)setRootFolder:(id)arg1;
- (void)setSuggestedPagesClient:(id)arg1;
- (id)suggestedPagesClient;

@end
