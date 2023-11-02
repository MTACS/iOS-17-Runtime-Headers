
@interface FMFindingUI.FMR1DebugView : UIView {
    void autoTestsActionHandler;
    void controlsView;
    void debugLabel;
    void debugModeObservation;
    void debugModeWithoutBearingLabel;
    void debugModeWithoutBearingSwitch;
    void dotCountLabel;
    void dotCountSegmentedControl;
    void ecoModeLabel;
    void ecoModeSwitch;
    void experienceType;
    void lastLoggedARFPS;
    void lastLoggedSKFPS;
    void lastSamplingTimeIntervalForARFPS;
    void lastSamplingTimeIntervalForSKFPS;
    void runTestsLabel;
    void runTestsSwitch;
    void sampleCountForARFPS;
    void sampleCountForSKFPS;
    void style;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (void)debugModeWithoutBearingAction;
- (id)description;
- (void)dotCountSegmentedControlActionWithSender:(id)arg1;
- (void)ecoModeAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)labelTapActionWithSender:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)runTestsAction;
- (void)showControlsToggleActionWithSender:(id)arg1;

@end
