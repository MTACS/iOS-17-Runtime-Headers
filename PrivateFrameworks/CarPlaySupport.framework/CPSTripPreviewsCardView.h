
@interface CPSTripPreviewsCardView : UIView <CPSLinearFocusProviding> {
    UIButton * _goButton;
    CPSCardPlatterView * _platterView;
    CPRouteChoice * _selectedRouteChoice;
    CPTrip * _selectedTrip;
    CPTripPreviewTextConfiguration * _textConfiguration;
    <CPSTripInitiating> * _tripDelegate;
    NSArray * _trips;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIButton *goButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPSCardPlatterView *platterView;
@property (nonatomic) CPRouteChoice *selectedRouteChoice;
@property (nonatomic) CPTrip *selectedTrip;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPTripPreviewTextConfiguration *textConfiguration;
@property (nonatomic, readonly) <CPSTripInitiating> *tripDelegate;
@property (nonatomic, readonly, copy) NSArray *trips;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)_updateButtonColors;
- (id)goButton;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (void)notifyDidSelectRouteChoice:(id)arg1;
- (id)platterView;
- (id)selectedRouteChoice;
- (id)selectedTrip;
- (void)setSelectedRouteChoice:(id)arg1;
- (void)setSelectedTrip:(id)arg1;
- (void)setTextConfiguration:(id)arg1;
- (id)setupGoButton;
- (void)startTripButtonPressed:(id)arg1;
- (id)textConfiguration;
- (void)traitCollectionDidChange:(id)arg1;
- (id)tripDelegate;
- (id)trips;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;

@end
