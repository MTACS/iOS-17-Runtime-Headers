
@protocol CKSceneOverlayPresentationContext <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (UIView *)anchorView;
- (void)didChangePopoverMetrics:(CKPopoverViewLayoutMetrics *)arg1;
- (void)didDismissSendMenuPresentation;
- (long long)presentationStyle;
- (UIView *)viewToPortal;
- (void)willDismissSendMenuPresentation;
- (void)willPresentAppCard;

@end
