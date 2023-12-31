
@protocol _TVIKAppDocumentDelegate <IKAppDocumentDelegatePrivate>

@required

- (struct CGSize { double x1; double x2; })tv_adjustedWindowSizeForDocument:(IKAppDocument *)arg1;

@optional

- (TVTemplateFeaturesManager *)tv_featuresManagerForDocument:(IKAppDocument *)arg1;
- (bool)tv_handleEventForDocument:(IKAppDocument *)arg1 eventName:(NSString *)arg2 targetResponder:(UIResponder *)arg3 viewElement:(IKViewElement *)arg4 extraInfo:(id*)arg5;
- (<TVPreviewInteractionController> *)tv_interactionPreviewControllerForViewController:(UIViewController *)arg1 presentingView:(UIView *)arg2 presentingElement:(IKViewElement *)arg3;
- (bool)tv_isPresentedModalForDocument:(IKAppDocument *)arg1;

@end
