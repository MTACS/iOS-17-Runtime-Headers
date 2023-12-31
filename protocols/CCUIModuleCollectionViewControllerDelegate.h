
@protocol CCUIModuleCollectionViewControllerDelegate <NSObject>

@required

- (long long)interfaceOrientationForModuleCollectionViewController:(CCUIModuleCollectionViewController *)arg1;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didAddModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didFinishInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willRemoveModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewControllerDidUpdateModules:(CCUIModuleCollectionViewController *)arg1;

@end
