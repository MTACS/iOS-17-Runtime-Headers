
@protocol SBHModalLibraryPresentationObserver <NSObject>

@required

- (void)modalLibraryPresenter:(SBHModalLibraryPresenter *)arg1 didDismissLibrary:(SBHLibraryViewController *)arg2;
- (void)modalLibraryPresenter:(SBHModalLibraryPresenter *)arg1 didPassCriticalDismissalPoint:(SBHLibraryViewController *)arg2;
- (void)modalLibraryPresenter:(SBHModalLibraryPresenter *)arg1 didPresentLibrary:(SBHLibraryViewController *)arg2;
- (void)modalLibraryPresenter:(SBHModalLibraryPresenter *)arg1 willDismissLibrary:(SBHLibraryViewController *)arg2;
- (void)modalLibraryPresenter:(SBHModalLibraryPresenter *)arg1 willPresentLibrary:(SBHLibraryViewController *)arg2;

@end
