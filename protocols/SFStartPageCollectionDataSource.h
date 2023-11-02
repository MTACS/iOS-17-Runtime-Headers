
@protocol SFStartPageCollectionDataSource <NSObject>

@required

- (long long)customizationControlPolicyForStartPageCollectionViewController:(SFStartPageCollectionViewController *)arg1;
- (NSArray *)sectionsForStartPageCollectionViewController:(SFStartPageCollectionViewController *)arg1;
- (bool)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 isSectionExpanded:(WBSStartPageSection *)arg2;
- (void)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 toggleSectionExpanded:(WBSStartPageSection *)arg2;
- (void)startPageCollectionViewControllerWillUpdateNavigationBar:(SFStartPageCollectionViewController *)arg1;

@end
