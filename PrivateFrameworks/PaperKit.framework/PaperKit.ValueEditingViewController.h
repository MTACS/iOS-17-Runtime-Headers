
@interface PaperKit.ValueEditingViewController : UIViewController {
    void $__lazy_storage_$_slider;
    void $__lazy_storage_$_stepper;
    void contentSize;
    void contentViewMargin;
    void currentValue;
    void delegate;
    void maxValue;
    void minValue;
    void stepperSizeHeight;
    void unit;
    void verticalInterItemSpacing;
}

- (void).cxx_destruct;
- (void)didChangeSliderValue;
- (void)didChangeStepperValue;
- (void)didFinishChangingSliderValue;
- (void)didStartChangingSliderValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
