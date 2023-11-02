
@interface _PKColorPickerView : UIView <_PKColorPickerImplementationDelegate> {
    UIPanGestureRecognizer * _crosshairPanGR;
    PKColorPickerCrosshairView * _crosshairView;
    <_PKColorPickerViewDelegate> * _delegate;
    PKColorMatrixView * _gridColorPicker;
    UIColor * _initialColor;
    UIColor * _selectedColor;
}

@property (nonatomic, retain) UIPanGestureRecognizer *crosshairPanGR;
@property (nonatomic, retain) PKColorPickerCrosshairView *crosshairView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PKColorPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKColorMatrixView *gridColorPicker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *initialColor;
@property (nonatomic, retain) UIColor *selectedColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSelectedColorForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)colorPickerImplementationDidChangeSelectedColor:(id)arg1;
- (void)colorPickerImplementationUserDidTouchUpInside:(id)arg1;
- (id)crosshairPanGR;
- (id)crosshairView;
- (id)delegate;
- (void)didPanCrosshair:(id)arg1;
- (id)gridColorPicker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initialColor;
- (void)layoutSubviews;
- (bool)pointIsSignificantlyOutside:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectedColor;
- (void)setCrosshairPanGR:(id)arg1;
- (void)setCrosshairView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGridColorPicker:(id)arg1;
- (void)setInitialColor:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
