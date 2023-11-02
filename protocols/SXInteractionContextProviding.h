
@protocol SXInteractionContextProviding <NSObject>

@required

- (void)commitPreviewViewController:(UIViewController *)arg1;
- (UIContextMenuConfiguration *)contextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(SXViewport *)arg2;
- (UITargetedPreview *)targetedPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(SXViewport *)arg2;
- (UIToolTipConfiguration *)toolTipAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(SXViewport *)arg2;

@end
