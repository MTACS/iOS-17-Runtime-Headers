
@interface CoreAudioKit.AUDynamicsProcessorViewController : CoreAudioKit.AURealtimeDrawingBaseViewController {
    void attackKnob;
    void curveFrame;
    void edgeControlSection;
    void frequencyData;
    void gainKnob;
    void graphView;
    void headerView;
    void inputLabel;
    void meter;
    void meterLabel;
    void outputLabel;
    void previousSize;
    void releaseKnob;
    void rightWidthConstraint;
    void viewContainer;
}

- (void).cxx_destruct;
- (void)auParameterValueChangedWithNotification:(id)arg1;
- (void)graphControlTouchedWithNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)knobReleasedWithNotification:(id)arg1;
- (void)knobTouchedWithNotification:(id)arg1;
- (void)knobValueChangedWithNotification:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
