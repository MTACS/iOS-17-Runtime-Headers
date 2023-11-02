
@interface EmojiPoster.GradientConfigurationController : UIViewController <UIColorPickerViewControllerDelegate> {
    void $__lazy_storage_$_colorPicker;
    void attributeSlider;
    void colorSlider;
    void colorUpdater;
    void delegate;
    void editingLinearGradientProperties;
    void editingRadialGradientProperties;
    void gradientProperties;
    void styleSegmentedControl;
    void type;
    void verticalStackView;
}

- (void).cxx_destruct;
- (void)attributeSliderValueChangedWithSlider:(id)arg1;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (void)colorPickerViewControllerDidFinish:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
