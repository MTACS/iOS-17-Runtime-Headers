
@protocol AMSUIMessageViewControllerDelegate <NSObject>

@required

- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didFailWithError:(NSError *)arg2;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didSelectActionWithDialogResult:(AMSDialogResult *)arg2;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;

@optional

- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didLoadDialogRequest:(AMSDialogRequest *)arg2;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 enqueueEventWithFields:(NSDictionary *)arg2 inTopic:(NSString *)arg3;
- (bool)messageViewController:(void *)arg1 handleDelegateAction:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: UIViewController<AMSUIMessageViewController> *, AMSDelegateAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (bool)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 shouldEnqueueMetricsForDialogResult:(AMSDialogResult *)arg2;
- (void)messageViewControllerDidDismiss:(UIViewController<AMSUIMessageViewController> *)arg1;

@end
