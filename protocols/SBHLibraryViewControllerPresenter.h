
@protocol SBHLibraryViewControllerPresenter <NSObject>

@required

- (<BSInvalidatable> *)acquireUseSnapshotAsBackgroundViewAssertionForReason:(NSString *)arg1;
- (bool)isLibraryPresentationModal;
- (bool)isPresentingLibraryInMostForegroundState:(SBHLibraryViewController *)arg1;

@end
