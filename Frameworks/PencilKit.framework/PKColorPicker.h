
@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate> {
    _PKColorPickerView * _colorPickerView;
    <PKColorPickerDelegate> * _delegate;
}

@property (nonatomic, retain) _PKColorPickerView *colorPickerView;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) <PKColorPickerDelegate> *delegate;
@property (nonatomic, retain) UIColor *selectedColor;

+ (id)_representableColorForColor:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_colorPickerView;
- (void)_colorPickerViewDidChangeSelectedColor:(id)arg1;
- (void)_colorPickerViewUserDidTouchUpInside:(id)arg1;
- (void)_setInitialColorForSpringLoading:(id)arg1;
- (void)_setSelectedColorForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)colorPickerView;
- (long long)colorUserInterfaceStyle;
- (id)delegate;
- (id)init;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)selectedColor;
- (void)setColorPickerView:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end