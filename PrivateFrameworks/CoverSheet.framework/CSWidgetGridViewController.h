
@interface CSWidgetGridViewController : CSCoverSheetViewControllerBase <PRWidgetGridViewControllerDelegate> {
    NSArray * _complicationDescriptors;
    CSComplicationManager * _complicationManager;
    <CSWidgetGridViewControllerDelegate> * _delegate;
    bool  _isVisible;
    CSComplicationPresentationState * _lastKnownComplicationPresentationState;
    bool  _screenOff;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    BSUIVibrancyEffectView * _vibrancyEffectView;
    PRWidgetGridViewController * _widgetGridViewController;
}

@property (nonatomic, retain) NSArray *complicationDescriptors;
@property (nonatomic, retain) CSComplicationManager *complicationManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSWidgetGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *iconLayout;
@property (getter=isScreenOff, nonatomic) bool screenOff;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (nonatomic, retain) BSUIVibrancyEffectView *vibrancyEffectView;
@property (nonatomic, readonly) UIView *widgetGridContentView;
@property (nonatomic, retain) PRWidgetGridViewController *widgetGridViewController;

- (void).cxx_destruct;
- (void)_backlightLuminanceDidChange:(id)arg1 previousTraitCollection:(id)arg2;
- (id)_buildComplicationPresentationStateForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2;
- (bool)_canShowWhileLocked;
- (id)_currentState;
- (void)_updateComplicationPresentationState:(id)arg1 reason:(id)arg2;
- (void)_updateGridViewControllerOccluded:(bool)arg1;
- (void)_updatePresentationStyleForNewOrientation:(long long)arg1;
- (void)_updatePresentationStyleForReason:(id)arg1;
- (id)_widgetTintParameters;
- (id)complicationDescriptors;
- (id)complicationManager;
- (bool)containsIconsInRow:(unsigned long long)arg1;
- (id)delegate;
- (void)handleComplicationSelectionGesture:(id)arg1;
- (id)iconLayout;
- (id)initWithComplicationManager:(id)arg1;
- (bool)interpretsViewAsContent:(id)arg1;
- (bool)isScreenOff;
- (void)setComplicationDescriptors:(id)arg1;
- (void)setComplicationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconLayout:(id)arg1;
- (void)setScreenOff:(bool)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (void)setVibrancyEffectView:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWidgetGridViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)vibrancyConfiguration;
- (id)vibrancyEffectView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)widgetGridContentView;
- (id)widgetGridViewController;
- (void)widgetGridViewController:(id)arg1 didRequestLaunchForComplicationDescriptor:(id)arg2 withAction:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
