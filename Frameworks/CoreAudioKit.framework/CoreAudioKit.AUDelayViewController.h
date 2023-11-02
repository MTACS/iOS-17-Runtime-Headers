
@interface CoreAudioKit.AUDelayViewController : CoreAudioKit.AUAppleViewControllerBase {
    void $__lazy_storage_$_decimalFormatter;
    void cutoffKnob;
    void edgeControlSection;
    void graphView;
    void headerView;
    void mixKnob;
    void modeControl;
    void rightWidthConstraint;
    void timeFormatter;
    void zoomFactor;
    void zoomInButton;
    void zoomOutButton;
}

- (void).cxx_destruct;
- (void)auParameterValueChangedWithNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)knobTouchedWithNotification:(id)arg1;
- (void)knobValueChangedWithNotification:(id)arg1;
- (void)modeControlChanged;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)zoomIn;
- (void)zoomOut;

@end
