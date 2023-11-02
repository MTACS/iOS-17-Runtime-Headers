
@interface CPSDashboardManeuversCardView : UIView <CPSNavigationDisplaying> {
    bool  _allowsCustomBackgroundColorForManeuver;
    NSArray * _maneuvers;
    CPSPrimaryManeuverView * _primaryManeuverView;
    CPSDashboardSecondaryManeuverView * _secondaryManeuverView;
    NSArray * _secondaryManeveuverConstraints;
    bool  _showSecondaryManeuverView;
}

@property (nonatomic) bool allowsCustomBackgroundColorForManeuver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *maneuvers;
@property (nonatomic, retain) CPSPrimaryManeuverView *primaryManeuverView;
@property (nonatomic, retain) CPSDashboardSecondaryManeuverView *secondaryManeuverView;
@property (nonatomic, retain) NSArray *secondaryManeveuverConstraints;
@property (nonatomic) bool showSecondaryManeuverView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)_updateStyleOverridesForSubviews;
- (bool)allowsCustomBackgroundColorForManeuver;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)maneuvers;
- (id)primaryManeuverView;
- (id)secondaryManeuverView;
- (id)secondaryManeveuverConstraints;
- (void)setAllowsCustomBackgroundColorForManeuver:(bool)arg1;
- (void)setManeuvers:(id)arg1;
- (void)setPrimaryManeuverView:(id)arg1;
- (void)setSecondaryManeuverView:(id)arg1;
- (void)setSecondaryManeveuverConstraints:(id)arg1;
- (void)setShowSecondaryManeuverView:(bool)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (bool)showSecondaryManeuverView;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (bool)wantsLargeSize;

@end
