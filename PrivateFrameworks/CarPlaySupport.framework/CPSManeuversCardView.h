
@interface CPSManeuversCardView : UIView <BSInvalidatable, CPSCardPlatterProviding, CPSNavigationDisplaying> {
    NSMutableArray * _activeConstraints;
    CPSCardPlatterView * _cardPlatterView;
    CPSHairlineView * _hairlineView;
    NSArray * _maneuvers;
    CPSPrimaryManeuverView * _primaryManeuverView;
    CPSSecondaryManeuverView * _secondaryManeuverView;
    bool  _showSecondaryManeuverView;
    bool  _usesCustomBackgroundColor;
}

@property (nonatomic, retain) NSMutableArray *activeConstraints;
@property (nonatomic, retain) CPSCardPlatterView *cardPlatterView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPSHairlineView *hairlineView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *maneuvers;
@property (nonatomic, retain) CPSPrimaryManeuverView *primaryManeuverView;
@property (nonatomic, retain) CPSSecondaryManeuverView *secondaryManeuverView;
@property (nonatomic) bool showSecondaryManeuverView;
@property (readonly) Class superclass;
@property (nonatomic) bool usesCustomBackgroundColor;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)_updateHairlineBackgroundColor;
- (void)_updateSecondaryManeuverBackgroundColor;
- (id)activeConstraints;
- (bool)canFitSize:(struct CGSize { double x1; double x2; })arg1;
- (id)cardPlatterView;
- (id)hairlineView;
- (id)initWithManeuvers:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidate;
- (void)layoutSubviews;
- (id)maneuvers;
- (id)primaryManeuverView;
- (id)secondaryManeuverView;
- (void)setActiveConstraints:(id)arg1;
- (void)setCardPlatterView:(id)arg1;
- (void)setHairlineView:(id)arg1;
- (void)setManeuvers:(id)arg1;
- (void)setPrimaryManeuverView:(id)arg1;
- (void)setSecondaryManeuverView:(id)arg1;
- (void)setShowSecondaryManeuverView:(bool)arg1;
- (void)setUsesCustomBackgroundColor:(bool)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (bool)showSecondaryManeuverView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (bool)usesCustomBackgroundColor;

@end
