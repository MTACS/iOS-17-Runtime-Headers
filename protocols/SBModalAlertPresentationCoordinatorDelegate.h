
@protocol SBModalAlertPresentationCoordinatorDelegate <NSObject>

@required

- (void)modalAlertPresentationCoordinator:(SBModalAlertPresentationCoordinator *)arg1 didChangeShowingSystemModalAlert:(bool)arg2;
- (NSSet *)modalAlertPresentationCoordinatorRequestedForegroundScenes:(SBModalAlertPresentationCoordinator *)arg1;

@end
