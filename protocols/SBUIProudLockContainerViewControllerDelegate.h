
@protocol SBUIProudLockContainerViewControllerDelegate <NSObject>

@required

- (void)proudLockContainerViewController:(SBUIProudLockContainerViewController *)arg1 guidanceTextVisibilityDidChange:(NSString *)arg2 animated:(bool)arg3;
- (bool)proudLockContainerViewControllerIsCoverSheetVisible:(SBUIProudLockContainerViewController *)arg1;
- (NSString *)transientSubtitleText;

@end
