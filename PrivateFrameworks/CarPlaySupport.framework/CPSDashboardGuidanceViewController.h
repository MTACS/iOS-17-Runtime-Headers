
@interface CPSDashboardGuidanceViewController : UIViewController <CPSButtonDelegate, CPSNavigationDisplaying> {
    NSArray * _activeConstraints;
    NSArray * _dashboardButtons;
    <CPDashboardClientInterface> * _dashboardClient;
    CPDashboardButton * _fakeDashboardButton;
    bool  _fakesDashboardSupport;
    CPSDashboardManeuversCardView * _maneuversCardView;
    CPSPausedCardView * _pausedCardView;
    UIView * _shortcutButtonsContainerView;
    NSLayoutConstraint * _shortcutButtonsContainerViewLeadingConstraint;
    NSLayoutConstraint * _shortcutButtonsContainerViewTrailingConstraint;
    NSArray * _spacingGuides;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, retain) NSArray *dashboardButtons;
@property (nonatomic, retain) <CPDashboardClientInterface> *dashboardClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPDashboardButton *fakeDashboardButton;
@property (nonatomic) bool fakesDashboardSupport;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSDashboardManeuversCardView *maneuversCardView;
@property (nonatomic, retain) CPSPausedCardView *pausedCardView;
@property (nonatomic, retain) UIView *shortcutButtonsContainerView;
@property (nonatomic, retain) NSLayoutConstraint *shortcutButtonsContainerViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *shortcutButtonsContainerViewTrailingConstraint;
@property (nonatomic, retain) NSArray *spacingGuides;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateShortcutContainerViewIn;
- (void)_animateShortcutContainerViewOut;
- (void)_focusHighlightColorChanged:(id)arg1;
- (void)_launchApp:(id)arg1;
- (void)_setContentReady;
- (void)_setupFakeButtonIfNecessary;
- (void)_transitionFromViews:(id)arg1 inView:(id)arg2 animated:(bool)arg3;
- (id)activeConstraints;
- (id)dashboardButtons;
- (id)dashboardClient;
- (void)didSelectButton:(id)arg1;
- (id)fakeDashboardButton;
- (bool)fakesDashboardSupport;
- (id)maneuversCardView;
- (void)navigator:(id)arg1 didEndTrip:(bool)arg2;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3 usingColor:(id)arg4;
- (id)pausedCardView;
- (void)setActiveConstraints:(id)arg1;
- (void)setDashboardButtons:(id)arg1;
- (void)setDashboardClient:(id)arg1;
- (void)setFakeDashboardButton:(id)arg1;
- (void)setFakesDashboardSupport:(bool)arg1;
- (void)setManeuversCardView:(id)arg1;
- (void)setPausedCardView:(id)arg1;
- (void)setShortCutButtons:(id)arg1;
- (void)setShortcutButtonsContainerView:(id)arg1;
- (void)setShortcutButtonsContainerViewLeadingConstraint:(id)arg1;
- (void)setShortcutButtonsContainerViewTrailingConstraint:(id)arg1;
- (void)setSpacingGuides:(id)arg1;
- (id)shortcutButtonsContainerView;
- (id)shortcutButtonsContainerViewLeadingConstraint;
- (id)shortcutButtonsContainerViewTrailingConstraint;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (id)spacingGuides;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)viewDidLoad;

@end
