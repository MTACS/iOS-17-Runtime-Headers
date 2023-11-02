
@protocol CCUIContentModule <NSObject>

@optional

- (UIViewController<CCUIContentModuleBackgroundViewController> *)backgroundViewController;
- (UIViewController<CCUIContentModuleBackgroundViewController> *)backgroundViewControllerForContext:(CCUIContentModulePresentationContext *)arg1;
- (UIViewController<CCUIContentModuleContentViewController> *)contentViewController;
- (UIViewController<CCUIContentModuleContentViewController> *)contentViewControllerForContext:(CCUIContentModulePresentationContext *)arg1;
- (void)setContentModuleContext:(CCUIContentModuleContext *)arg1;

@end
