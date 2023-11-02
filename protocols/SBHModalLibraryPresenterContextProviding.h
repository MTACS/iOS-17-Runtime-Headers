
@protocol SBHModalLibraryPresenterContextProviding <NSObject>

@required

- (<BSInvalidatable> *)acquireOrderSourceContainerViewBeforeLibraryViewAssertionForReason:(NSString *)arg1;
- (UIViewController *)containerViewControllerForPresentingInForeground:(SBHModalLibraryPresenter *)arg1;
- (bool)isDefaultContainerForegroundForPresenter:(SBHModalLibraryPresenter *)arg1;
- (SBHLibraryIconViewController *)libraryIconViewControllerForPresenter:(SBHModalLibraryPresenter *)arg1;
- (SBIconView *)libraryIconViewForPresenter:(SBHModalLibraryPresenter *)arg1;
- (UIView *)sourceContainerViewForPresenter:(SBHModalLibraryPresenter *)arg1;

@end
