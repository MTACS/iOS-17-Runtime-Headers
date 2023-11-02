
@protocol CSTraitAwareAppHostConfiguring <NSObject>

@required

- (CSCoverSheetViewControllerBase<SBApplicationHosting> *)applicationHosterForTraitsHostContextProvider:(id <CSTraitAwareAppHostContextProviding>)arg1;
- (UIViewController<CSTraitsAwareOrientedAppHosting> *)traitsAwareViewControllerForApplicationHoster:(CSCoverSheetViewControllerBase<SBApplicationHosting> *)arg1 targetWindow:(UIWindow *)arg2;

@end
