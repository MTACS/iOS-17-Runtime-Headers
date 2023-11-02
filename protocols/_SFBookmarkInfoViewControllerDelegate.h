
@protocol _SFBookmarkInfoViewControllerDelegate <NSObject>

@required

- (<TabGroupProvider> *)tabGroupProviderForBookmarkInfoViewController:(_SFBookmarkInfoViewController *)arg1;

@optional

- (void)bookmarkInfoViewController:(_SFBookmarkInfoViewController *)arg1 didFinishWithResult:(bool)arg2;
- (bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(_SFBookmarkInfoViewController *)arg1;
- (bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(_SFBookmarkInfoViewController *)arg1;

@end
