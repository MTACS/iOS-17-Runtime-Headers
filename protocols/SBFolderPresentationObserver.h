
@protocol SBFolderPresentationObserver <NSObject>

@required

- (void)iconManager:(SBHIconManager *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;

@end
