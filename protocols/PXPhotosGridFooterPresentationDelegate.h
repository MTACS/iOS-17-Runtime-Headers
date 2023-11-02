
@protocol PXPhotosGridFooterPresentationDelegate <NSObject>

@required

- (void)dismissPresentedViewControllerForFooterPresentation:(PXPhotosGridFooterPresentation *)arg1;
- (void)footerPresentation:(PXPhotosGridFooterPresentation *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })maskPaddingForFooterPresentation:(PXPhotosGridFooterPresentation *)arg1;

@end
