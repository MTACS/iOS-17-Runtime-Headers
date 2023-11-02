
@interface CoreAudioKit.AUEQViewControllerBase : CoreAudioKit.AUAppleViewControllerBase {
    void $__lazy_storage_$_decimalFormatter;
    void $__lazy_storage_$_eqView;
    void $__lazy_storage_$_wholeNumberFormatter;
    void displayMode;
    void frequencyData;
    void params;
    void previousSize;
}

- (void).cxx_destruct;
- (void)auGraphBeginGestureWithNotification:(id)arg1;
- (void)auGraphEndGestureWithNotification:(id)arg1;
- (void)auParameterValueChangedWithNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
