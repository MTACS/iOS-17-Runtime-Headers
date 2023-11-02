
@protocol SFStartPageDataSource <NSObject>

@required

- (NSArray *)sectionsForStartPageViewController:(SFStartPageViewController *)arg1;
- (WBSStartPageSection *)startPageViewController:(SFStartPageViewController *)arg1 detailSectionForItemIdentifier:(id)arg2;

@optional

- (NSString *)backgroundImageIdentifierForStartPageViewController:(SFStartPageViewController *)arg1;
- (void)startPageViewController:(SFStartPageViewController *)arg1 didSelectItemWithIdentifier:(id)arg2;
- (void)startPageViewController:(SFStartPageViewController *)arg1 didUpdateSearchPattern:(NSString *)arg2;
- (bool)startPageViewController:(SFStartPageViewController *)arg1 isSectionExpanded:(WBSStartPageSection *)arg2;
- (void)startPageViewController:(SFStartPageViewController *)arg1 toggleSectionExpanded:(WBSStartPageSection *)arg2;
- (void)startPageViewControllerDidChangeRootViewVisibility:(SFStartPageViewController *)arg1;
- (bool)startPageViewControllerShouldShowSearchField:(SFStartPageViewController *)arg1;

@end
