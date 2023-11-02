
@protocol MUBrowseCategoryViewControllerDelegate <NSObject>

@required

- (void)categoryBrowseViewController:(MUBrowseCategoryViewController *)arg1 didTapOnSearchCategory:(GEOSearchCategory *)arg2;

@optional

- (void)categoryBrowseViewControllerDidDisplayBrowseCategories:(MUBrowseCategoryViewController *)arg1;

@end
