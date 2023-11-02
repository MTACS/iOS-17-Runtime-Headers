
@interface CSComplicationContainerViewController : CSCoverSheetViewControllerBase <CHUISWidgetHostViewControllerDelegate, SBFBacklightSceneHostEnvironmentProviding> {
    NSMutableDictionary * _cancelTouchesAssertionsByUniqueIdentifier;
    CSComplicationManager * _complicationManager;
    UIView * _complicationSuperview;
    <CSComplicationContainerViewControllerDelegate> * _delegate;
    unsigned long long  _inlineTextAlignment;
    bool  _isVisible;
    CSComplicationPresentationState * _lastKnownComplicationPresentationState;
    long long  _layoutStyle;
    bool  _screenOff;
    UIColor * _tintColor;
    NSArray * _widgetDescriptors;
    NSMutableDictionary * _widgetViewControllersByUniqueIdentifier;
}

@property (nonatomic, retain) NSMutableDictionary *cancelTouchesAssertionsByUniqueIdentifier;
@property (nonatomic, retain) CSComplicationManager *complicationManager;
@property (nonatomic, readonly) UIView *complicationSuperview;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSComplicationContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inlineTextAlignment;
@property (nonatomic) long long layoutStyle;
@property (getter=isScreenOff, nonatomic) bool screenOff;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) NSArray *widgetDescriptors;
@property (nonatomic, retain) NSMutableDictionary *widgetViewControllersByUniqueIdentifier;

- (void).cxx_destruct;
- (void)_backlightLuminanceDidChange:(id)arg1 previousTraitCollection:(id)arg2;
- (id)_buildComplicationPresentationStateForTraitCollection:(id)arg1;
- (bool)_canShowWhileLocked;
- (id)_currentState;
- (id)_hostViewControllerForComplicationDescriptor:(id)arg1;
- (id)_inlineComplicationDescriptorIfSolo;
- (void)_layoutInlineComplication;
- (void)_layoutModularComplications;
- (void)_setTextParametersAndFontForWidgetController:(id)arg1;
- (void)_updatePresentationStyleForReason:(id)arg1;
- (void)_updatePresentationStyleForTransitionToNewTraitCollection:(id)arg1 reason:(id)arg2;
- (id)_widgetTintParameters;
- (void)beginCancellingTouches;
- (id)cancelTouchesAssertionsByUniqueIdentifier;
- (id)complicationManager;
- (id)complicationSuperview;
- (id)delegate;
- (void)endCancellingTouches;
- (void)handleComplicationSelectionGesture:(id)arg1;
- (id)initWithComplicationManager:(id)arg1;
- (id)initWithComplicationManager:(id)arg1 inlineTextAlignment:(unsigned long long)arg2;
- (unsigned long long)inlineTextAlignment;
- (bool)interpretsViewAsContent:(id)arg1;
- (bool)isScreenOff;
- (long long)layoutStyle;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)setCancelTouchesAssertionsByUniqueIdentifier:(id)arg1;
- (void)setComplicationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInlineTextAlignment:(unsigned long long)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setScreenOff:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWidgetDescriptors:(id)arg1;
- (void)setWidgetViewControllersByUniqueIdentifier:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)tintColor;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (id)widgetDescriptors;
- (void)widgetHostViewController:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (id)widgetViewControllersByUniqueIdentifier;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
