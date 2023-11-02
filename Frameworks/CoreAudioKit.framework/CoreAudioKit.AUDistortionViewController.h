
@interface CoreAudioKit.AUDistortionViewController : CoreAudioKit.AUAppleViewControllerBase {
    void distortionView;
    void headerView;
    void tabView;
    void v3AU;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)layoutChangedWithNotification:(id)arg1;
- (void)tabSelectionChangedWithNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
