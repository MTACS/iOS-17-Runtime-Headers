
@interface PXPhotosExternalSecondaryToolbarController : PXSecondaryToolbarController <PXSecondaryToolbarStyleGuideProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithContainerView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarContentInsets:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarPadding:(id)arg1;
- (long long)secondaryToolbarControllerToolbarPlacement:(id)arg1;
- (bool)secondaryToolbarControllerToolbarRenderedExternally:(id)arg1;
- (struct CGSize { double x1; double x2; })secondaryToolbarControllerToolbarSize:(id)arg1;
- (bool)secondaryToolbarControllerWantsToolbarVisible:(id)arg1;

@end
