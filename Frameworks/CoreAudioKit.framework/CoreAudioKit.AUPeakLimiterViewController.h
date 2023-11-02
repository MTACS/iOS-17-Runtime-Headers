
@interface CoreAudioKit.AUPeakLimiterViewController : CoreAudioKit.AURealtimeDrawingBaseViewController {
    void $__lazy_storage_$_attackKnob;
    void $__lazy_storage_$_controlsView;
    void $__lazy_storage_$_gainKnob;
    void $__lazy_storage_$_graphView;
    void $__lazy_storage_$_headerView;
    void $__lazy_storage_$_releaseKnob;
    void $__lazy_storage_$_wholeNumberFormatter;
    void attackSpacer;
    void compressionAmountParam;
    void displayMode;
    void gainSpacer;
    void loopIndex;
    void maxCompressionValue;
    void maxPeak;
    void minCompressionValue;
    void previousSize;
    void temporaryConstraints;
    void v3AU;
    void viewContainer;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)knobReleasedWithNotification:(id)arg1;
- (void)knobTouchedWithNotification:(id)arg1;
- (void)knobValueChangedWithNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
