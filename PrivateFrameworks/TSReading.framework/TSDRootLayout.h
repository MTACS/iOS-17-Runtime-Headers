
@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {
    TSDLayoutController * mLayoutController;
    TSUPointerKeyDictionary * mShiftedObjects;
    bool  mSupportsAdaptiveLayout;
}

- (struct CGPoint { double x1; double x2; })applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)beginDynamicAdaptiveLayout;
- (id)childLayoutsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)endDynamicAdaptiveLayout;
- (id)initWithLayoutController:(id)arg1;
- (bool)isRootLayoutForInspectorGeometry;
- (id)layoutController;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_shiftedObjects;
- (bool)providesGuidesForChildLayouts;

@end
