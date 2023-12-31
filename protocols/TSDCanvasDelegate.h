
@protocol TSDCanvasDelegate <NSObject>

@required

- (TSKDocumentRoot *)documentRoot;

@optional

- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (<TSDLayoutGeometryProvider> *)canvas:(TSDCanvas *)arg1 layoutGeometryProviderForLayout:(TSDLayout *)arg2;
- (void)canvas:(TSDCanvas *)arg1 willLayoutRep:(TSDRep *)arg2;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidUpdateVisibleBounds:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (void)canvasWillLayout:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (bool)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (bool)isCanvasInteractive;
- (bool)isPrintingCanvas;
- (bool)shouldShowInstructionalText;
- (bool)shouldShowTextOverflowGlyphs;
- (bool)shouldSuppressBackgrounds;
- (bool)spellCheckingSupported;
- (bool)spellCheckingSuppressed;
- (bool)supportsAdaptiveLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;

@end
