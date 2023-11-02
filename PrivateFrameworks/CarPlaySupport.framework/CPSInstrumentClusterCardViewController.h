
@interface CPSInstrumentClusterCardViewController : UIViewController <CPSNavigationDisplaying, CPSSafeAreaDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _currentClientInsets;
    CPSManeuversCardView * _currentManeuversCardView;
    CPSPausedCardView * _currentPausedCardView;
    CPSDashboardEstimatesViewController * _estimatesViewController;
    bool  _isMapContentOnly;
    CPSInstrumentClusterCardLayout * _layout;
    unsigned long long  _layoutOverride;
    UIViewController * _platterViewController;
    NSObject<CPSSafeAreaDelegate> * _safeAreaDelegate;
    bool  _shouldUpdateContent;
    bool  _showETA;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } currentClientInsets;
@property (nonatomic, retain) CPSManeuversCardView *currentManeuversCardView;
@property (nonatomic, retain) CPSPausedCardView *currentPausedCardView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPSDashboardEstimatesViewController *estimatesViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMapContentOnly;
@property (nonatomic, retain) CPSInstrumentClusterCardLayout *layout;
@property (nonatomic) unsigned long long layoutOverride;
@property (nonatomic, retain) UIViewController *platterViewController;
@property (nonatomic) NSObject<CPSSafeAreaDelegate> *safeAreaDelegate;
@property (nonatomic, readonly) bool shouldUpdateContent;
@property (nonatomic) bool showETA;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_layoutGuideForClient;
- (void)_setupConstraintsForETACard;
- (void)_setupConstraintsForPauseCard;
- (void)_setupConstraintsForPlatterView;
- (void)_setupConstraintsForTurnCard;
- (void)_transitionFromViews:(id)arg1 inView:(id)arg2 horizontalSlideAnimation:(bool)arg3;
- (void)_updateClientSafeArea;
- (void)_updateClientSafeAreaWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })currentClientInsets;
- (id)currentManeuversCardView;
- (id)currentPausedCardView;
- (id)estimatesViewController;
- (id)init;
- (id)initForMapContent;
- (bool)isMapContentOnly;
- (id)layout;
- (unsigned long long)layoutOverride;
- (void)navigator:(id)arg1 didEndTrip:(bool)arg2;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3 usingColor:(id)arg4;
- (id)platterViewController;
- (id)safeAreaDelegate;
- (void)setCurrentClientInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCurrentManeuversCardView:(id)arg1;
- (void)setCurrentPausedCardView:(id)arg1;
- (void)setEstimatesViewController:(id)arg1;
- (void)setIsMapContentOnly:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutOverride:(unsigned long long)arg1;
- (void)setPlatterViewController:(id)arg1;
- (void)setSafeAreaDelegate:(id)arg1;
- (void)setShouldUpdateContent:(bool)arg1;
- (void)setShowETA:(bool)arg1;
- (bool)shouldUpdateContent;
- (bool)showETA;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)updateTripEstimates:(id)arg1;
- (void)viewController:(id)arg1 didUpdateSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
