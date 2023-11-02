
@interface SFStartPageSingleSectionDataSource : NSObject <SFStartPageCollectionDataSource, SFStartPageDataSourceObserving> {
    SFStartPageCollectionViewController * _collectionViewController;
    id /* block */  _navigationItemHandler;
    id /* block */  _reloadHandler;
    WBSStartPageSection * _section;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadSection;
- (void)connectToViewController:(id)arg1;
- (long long)customizationControlPolicyForStartPageCollectionViewController:(id)arg1;
- (id)initWithReloadHandler:(id /* block */)arg1 navigationItemHandler:(id /* block */)arg2;
- (void)reloadDataAnimatingDifferences:(bool)arg1;
- (void)reloadNavigationItemAnimated:(bool)arg1;
- (id)sectionsForStartPageCollectionViewController:(id)arg1;
- (void)startPageCollectionViewController:(id)arg1 editSection:(id)arg2;
- (bool)startPageCollectionViewController:(id)arg1 isSectionExpanded:(id)arg2;
- (void)startPageCollectionViewController:(id)arg1 toggleSectionExpanded:(id)arg2;
- (void)startPageCollectionViewControllerWillUpdateNavigationBar:(id)arg1;

@end
