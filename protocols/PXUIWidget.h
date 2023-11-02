
@protocol PXUIWidget <PXWidget>

@optional

- (<PXUIViewBasicTile> *)bestCursorTileForLiftingAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(NSObject<UICoordinateSpace> *)arg2;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forCoordinateSpace:(NSObject<UICoordinateSpace> *)arg2;
- (void)controllerTraitCollectionDidChangeFrom:(UITraitCollection *)arg1 to:(UITraitCollection *)arg2;
- (bool)cursorInteractionEnabled;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(bool)arg2;
- (void)environmentDidUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (NSObject<PXAnonymousViewController> *)genericPreviewViewController;
- (<PXUIImageViewBasicTile> *)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (PXOneUpPresentation *)oneUpPresentation;
- (NSObject<PXAnonymousViewController> *)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(NSObject<PXAnonymousView> *)arg2;
- (void)setOneUpPresentation:(PXOneUpPresentation *)arg1;

@end
