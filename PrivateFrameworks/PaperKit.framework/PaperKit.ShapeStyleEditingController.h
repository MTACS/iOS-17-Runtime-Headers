
@interface PaperKit.ShapeStyleEditingController : NSObject <PaperKit.ValueEditingViewControllerDelegate, UIGestureRecognizerDelegate, _UIColorPickerViewControllerDelegate> {
    void controller;
    void defaultFillColor;
    void defaultStrokeColor;
    void editingAttribute;
    void isCompactUI;
    void shapeStyleEditingView;
    void viewControllerProvider;
}

- (void).cxx_destruct;
- (void)_colorPickerViewControllerDidDeselectColor:(id)arg1;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (void)didChangeOpacitySlider;
- (void)didFinishChangingOpacitySlider;
- (void)didStartChangingOpacitySlider;
- (void)didTapArrowColorButtonForEvent:(id)arg1;
- (void)didTapCompactOpacityButtonForEvent:(id)arg1;
- (void)didTapFillColorButtonForEvent:(id)arg1;
- (void)didTapStrokeColorButtonForEvent:(id)arg1;
- (void)didTapStrokeWidthButtonForEvent:(id)arg1;
- (id)init;
- (void)lineTypeControlValueChanged;
- (void)valueEditingViewController:(id)arg1 didChangeValue:(long long)arg2;
- (void)valueEditingViewController:(id)arg1 didFinishChangingValue:(long long)arg2;
- (void)valueEditingViewController:(id)arg1 didStartChangingValue:(long long)arg2;

@end
