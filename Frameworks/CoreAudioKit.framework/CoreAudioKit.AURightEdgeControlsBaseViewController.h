
@interface CoreAudioKit.AURightEdgeControlsBaseViewController : CoreAudioKit.AUAppleViewControllerBase {
    void $__lazy_storage_$_decimalFormatter;
    void $__lazy_storage_$_wholeNumberFormatter;
    void bandControl;
    void bandHeightConstraint;
    void bandWidthConstraint;
    void curveFrame;
    void edgeControlSection;
    void frequencyData;
    void gainKnob;
    void graphView;
    void headerView;
    void previousSize;
    void rightWidthConstraint;
}

- (void).cxx_destruct;
- (void)auParameterValueChangedWithNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
