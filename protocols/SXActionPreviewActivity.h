
@protocol SXActionPreviewActivity <NSObject>

@required

- (void)commitViewController:(UIViewController *)arg1 action:(id <SXAction>)arg2;
- (UIViewController *)previewViewControllerForAction:(id <SXAction>)arg1;

@end
