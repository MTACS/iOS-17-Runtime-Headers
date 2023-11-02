
@protocol CKExpandedAppViewControllerProtocol <NSObject>

@required

- (void)animateBrowserViewFromSourceRect:(void *)arg1 interactive:(void *)arg2 grabberView:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, bool, CKAppGrabberView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)animateBrowserViewToTargetRect:(void *)arg1 grabberView:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, CKAppGrabberView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController<CKBrowserViewControllerProtocol> *)contentViewController;
- (<CKExpandedAppViewControllerDelegate> *)delegate;
- (id)initWithConversation:(CKConversation *)arg1 plugin:(IMBalloonPlugin *)arg2;
- (void)setContentViewController:(UIViewController<CKBrowserViewControllerProtocol> *)arg1;
- (void)setDelegate:(id <CKExpandedAppViewControllerDelegate>)arg1;

@end
