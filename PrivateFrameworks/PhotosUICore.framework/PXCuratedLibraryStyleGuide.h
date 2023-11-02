
@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver> {
    long long  _buttonStyle;
    PXExtendedTraitCollection * _extendedTraitCollection;
    double  _lateralMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _secondaryToolbarContentInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _secondaryToolbarPadding;
    long long  _secondaryToolbarPlacement;
    bool  _secondaryToolbarRenderedExternally;
    struct CGSize { 
        double width; 
        double height; 
    }  _secondaryToolbarSize;
    long long  _toggleAspectFitButtonPlacement;
    long long  _zoomButtonsButtonPlacement;
}

@property (nonatomic) long long buttonStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lateralMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } secondaryToolbarContentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } secondaryToolbarPadding;
@property (nonatomic) long long secondaryToolbarPlacement;
@property (nonatomic) bool secondaryToolbarRenderedExternally;
@property (nonatomic) struct CGSize { double x1; double x2; } secondaryToolbarSize;
@property (readonly) Class superclass;
@property (nonatomic) long long toggleAspectFitButtonPlacement;
@property (nonatomic) long long zoomButtonsButtonPlacement;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_update;
- (long long)buttonStyle;
- (id)extendedTraitCollection;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (double)lateralMargin;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarContentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarPadding;
- (long long)secondaryToolbarPlacement;
- (bool)secondaryToolbarRenderedExternally;
- (struct CGSize { double x1; double x2; })secondaryToolbarSize;
- (void)setButtonStyle:(long long)arg1;
- (void)setLateralMargin:(double)arg1;
- (void)setSecondaryToolbarContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSecondaryToolbarPlacement:(long long)arg1;
- (void)setSecondaryToolbarRenderedExternally:(bool)arg1;
- (void)setSecondaryToolbarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setToggleAspectFitButtonPlacement:(long long)arg1;
- (void)setZoomButtonsButtonPlacement:(long long)arg1;
- (long long)toggleAspectFitButtonPlacement;
- (long long)zoomButtonsButtonPlacement;

@end
