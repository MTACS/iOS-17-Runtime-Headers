
@protocol HUQuickControlViewControllerCoordinatorDelegate <NSObject>

@required

- (void)controllerCoordinator:(HUQuickControlViewControllerCoordinator *)arg1 didUpdateIconDescriptor:(id <HFIconDescriptor>)arg2 showOffState:(bool)arg3;
- (void)controllerCoordinator:(HUQuickControlViewControllerCoordinator *)arg1 didUpdateReachability:(bool)arg2;
- (void)controllerCoordinator:(HUQuickControlViewControllerCoordinator *)arg1 didUpdateStatusWithPrimaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (bool)isConfiguredForNonHomeUser:(HUQuickControlViewControllerCoordinator *)arg1;

@end
