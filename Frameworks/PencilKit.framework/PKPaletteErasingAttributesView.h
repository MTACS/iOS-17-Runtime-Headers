
@interface PKPaletteErasingAttributesView : UIView {
    NSArray * _hiddenThicknessPickerConstraints;
    bool  _hideWeightPicker;
    UISegmentedControl * _segmentedControl;
    _PKInkThicknessPicker * _thicknessPicker;
    NSArray * _visibleThicknessPickerConstraints;
}

@property (nonatomic) long long eraserType;
@property (nonatomic, retain) NSArray *hiddenThicknessPickerConstraints;
@property (nonatomic) bool hideWeightPicker;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) _PKInkThicknessPicker *thicknessPicker;
@property (nonatomic, retain) NSArray *visibleThicknessPickerConstraints;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updateThicknessPickerToolConfiguration;
- (long long)eraserType;
- (id)hiddenThicknessPickerConstraints;
- (bool)hideWeightPicker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)segmentedControl;
- (void)setEraserType:(long long)arg1;
- (void)setHiddenThicknessPickerConstraints:(id)arg1;
- (void)setHideWeightPicker:(bool)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setThicknessPicker:(id)arg1;
- (void)setVisibleThicknessPickerConstraints:(id)arg1;
- (id)thicknessPicker;
- (id)visibleThicknessPickerConstraints;

@end
