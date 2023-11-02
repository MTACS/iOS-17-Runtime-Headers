
@interface CPSPagingTripPreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting, CPSPageControlling> {
    NSLayoutConstraint * _alternateRoutesHeightConstraint;
    CPSHairlineBorderedView * _borderedAlternatesView;
    CPSHairlineBorderedView * _borderedGoButton;
    CPSHairlineBorderedView * _borderedMoreRoutesButton;
    NSLayoutConstraint * _contentBottomConstraint;
    NSLayoutConstraint * _contentTopConstraint;
    NSMutableDictionary * _estimatesForTripIdentifiers;
    UIButton * _moreRoutesButton;
    CPSRouteOverviewView * _overviewView;
    CPSPagingControlView * _pageControl;
    bool  _showMoreRoutes;
    NSLayoutConstraint * _toggleRoutesButtonHeightConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *alternateRoutesHeightConstraint;
@property (nonatomic, readonly) CPSHairlineBorderedView *borderedAlternatesView;
@property (nonatomic, readonly) CPSHairlineBorderedView *borderedGoButton;
@property (nonatomic, readonly) CPSHairlineBorderedView *borderedMoreRoutesButton;
@property (nonatomic, retain) NSLayoutConstraint *contentBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *estimatesForTripIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *moreRoutesButton;
@property (nonatomic, readonly) CPSRouteOverviewView *overviewView;
@property (nonatomic, readonly) CPSPagingControlView *pageControl;
@property (nonatomic) bool showMoreRoutes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *toggleRoutesButtonHeightConstraint;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)_setOverviewCollapsed:(bool)arg1;
- (void)_toggleMoreRoutesButtonPressed:(id)arg1;
- (void)_updateButtonColors;
- (id)alternateRoutesHeightConstraint;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (id)borderedAlternatesView;
- (id)borderedGoButton;
- (id)borderedMoreRoutesButton;
- (id)contentBottomConstraint;
- (id)contentTopConstraint;
- (id)estimatesForTripIdentifiers;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (id)moreRoutesButton;
- (id)overviewView;
- (id)pageControl;
- (void)pagingControlView:(id)arg1 didSelectPageIndex:(unsigned long long)arg2;
- (id)preferredFocusEnvironments;
- (void)setAlternateRoutesHeightConstraint:(id)arg1;
- (void)setContentBottomConstraint:(id)arg1;
- (void)setContentTopConstraint:(id)arg1;
- (void)setSelectedRouteChoice:(id)arg1;
- (void)setSelectedTrip:(id)arg1;
- (void)setShowMoreRoutes:(bool)arg1;
- (void)setToggleRoutesButtonHeightConstraint:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (bool)showMoreRoutes;
- (id)toggleRoutesButtonHeightConstraint;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;

@end
