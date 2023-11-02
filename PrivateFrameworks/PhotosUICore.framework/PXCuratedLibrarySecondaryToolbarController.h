
@interface PXCuratedLibrarySecondaryToolbarController : PXSecondaryToolbarController <PXChangeObserver, PXSecondaryToolbarStyleGuideProvider> {
    PXCuratedLibraryStyleGuide * _styleGuide;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithContainerView:(id)arg1 viewModel:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarContentInsets:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarPadding:(id)arg1;
- (long long)secondaryToolbarControllerToolbarPlacement:(id)arg1;
- (bool)secondaryToolbarControllerToolbarRenderedExternally:(id)arg1;
- (struct CGSize { double x1; double x2; })secondaryToolbarControllerToolbarSize:(id)arg1;
- (bool)secondaryToolbarControllerWantsToolbarVisible:(id)arg1;
- (id)styleGuide;
- (id)viewModel;

@end
