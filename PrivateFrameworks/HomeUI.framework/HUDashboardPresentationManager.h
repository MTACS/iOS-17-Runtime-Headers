
@interface HUDashboardPresentationManager : NSObject <UINavigationControllerDelegate>

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)init;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didPushItem:(id)arg2;
- (void)navigationController:(id)arg1 didUpdatePreferredPaletteHeight:(double)arg2;
- (void)navigationController:(id)arg1 willPresent:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willPushItem:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;

@end
