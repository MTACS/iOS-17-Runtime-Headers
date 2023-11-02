
@interface _UIColorWellVisualStyle : UIView {
    <_UIColorWellControl> * _colorWell;
    UIDragPreviewParameters * _dragPreviewParameters;
    NSString * _pickerTitle;
    UIColor * _selectedColor;
    bool  _supportsAlpha;
    bool  _wantsExtraTouchInsets;
    bool  _wantsSystemDragAndDrop;
}

@property (nonatomic) <_UIColorWellControl> *colorWell;
@property (nonatomic, readonly) UIDragPreviewParameters *dragPreviewParameters;
@property (nonatomic, retain) NSString *pickerTitle;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool supportsAlpha;
@property (nonatomic) bool wantsExtraTouchInsets;
@property (nonatomic) bool wantsSystemDragAndDrop;

- (void).cxx_destruct;
- (id)colorWell;
- (id)dragPreviewParameters;
- (id)initWithColorWell:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)pickerTitle;
- (id)selectedColor;
- (void)setColorWell:(id)arg1;
- (void)setPickerTitle:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColor:(id)arg1 notifyingPicker:(bool)arg2;
- (void)setSupportsAlpha:(bool)arg1;
- (void)setWantsExtraTouchInsets:(bool)arg1;
- (void)setWantsSystemDragAndDrop:(bool)arg1;
- (bool)supportsAlpha;
- (bool)wantsExtraTouchInsets;
- (bool)wantsSystemDragAndDrop;

@end
