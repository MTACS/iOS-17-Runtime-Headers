
@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation> {
    NSArray * _colorButtons;
    NSArray * _colorMatrix;
    <_PKColorPickerImplementationDelegate> * _colorPickerDelegate;
    long long  _colorUserInterfaceStyle;
    NSArray * _darkColorMatrix;
    UIColor * selectedColor;
}

@property (nonatomic, retain) NSArray *colorButtons;
@property (nonatomic, retain) NSArray *colorMatrix;
@property (nonatomic) <_PKColorPickerImplementationDelegate> *colorPickerDelegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic, retain) NSArray *darkColorMatrix;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedColor;
@property (readonly) Class superclass;

+ (id)_representableColorForColor:(id)arg1;
+ (double)_rgbDistanceFromColor:(id)arg1 toColor:(id)arg2;
+ (id)defaultColorMatrix;
+ (id)flippedColorMatrix:(id)arg1;

- (void).cxx_destruct;
- (id)_boundedPointForPoint:(id)arg1;
- (id)_colorForPoint:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewWithPoint:(id)arg1;
- (id)_pointForCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_pointForColor:(id)arg1;
- (id)_pointFromButton:(id)arg1;
- (long long)_uiColorUserInterfaceStyle;
- (id)colorButtons;
- (id)colorForColorPickerCrosshairView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)colorMatrix;
- (void)colorPickerCrosshairViewShouldUpdateColor:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg1;
- (id)colorPickerDelegate;
- (long long)colorUserInterfaceStyle;
- (unsigned long long)cornerPositionForColorPickerCrosshairView:(id)arg1;
- (id)darkColorMatrix;
- (void)didTapColorButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForColorPickerCrosshairView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)representableColorForColor:(id)arg1;
- (id)selectedColor;
- (void)setColorButtons:(id)arg1;
- (void)setColorMatrix:(id)arg1;
- (void)setColorPickerDelegate:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDarkColorMatrix:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (id)uiColorMatrix;

@end
