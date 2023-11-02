
@interface CPSInstrumentClusterViewController : UIViewController <CPSNavigationDisplaying> {
    NSArray * _attributedInactiveVariants;
    long long  _guidanceStyle;
    CPSAbridgableLabel * _inactiveLabel;
    NSArray * _inactiveVariants;
    CPSDashboardManeuversCardView * _maneuversCardView;
    CPSPausedCardView * _pausedCardView;
}

@property (nonatomic, copy) NSArray *attributedInactiveVariants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long guidanceStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSAbridgableLabel *inactiveLabel;
@property (nonatomic, copy) NSArray *inactiveVariants;
@property (nonatomic, retain) CPSDashboardManeuversCardView *maneuversCardView;
@property (nonatomic, retain) CPSPausedCardView *pausedCardView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_transitionFromViews:(id)arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)_updateGuidanceStyle;
- (id)attributedInactiveVariants;
- (long long)guidanceStyle;
- (id)inactiveLabel;
- (id)inactiveVariants;
- (void)loadView;
- (id)maneuversCardView;
- (void)navigator:(id)arg1 didEndTrip:(bool)arg2;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3 usingColor:(id)arg4;
- (id)pausedCardView;
- (void)setAttributedInactiveVariants:(id)arg1;
- (void)setGuidanceStyle:(long long)arg1;
- (void)setInactiveLabel:(id)arg1;
- (void)setInactiveVariants:(id)arg1;
- (void)setManeuversCardView:(id)arg1;
- (void)setPausedCardView:(id)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;

@end
