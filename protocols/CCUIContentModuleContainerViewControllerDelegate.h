
@protocol CCUIContentModuleContainerViewControllerDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactModeFrameForContentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1;
- (bool)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 canBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didFinishInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 willCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 willOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(CCUIContentModuleContainerViewController *)arg1;

@end
