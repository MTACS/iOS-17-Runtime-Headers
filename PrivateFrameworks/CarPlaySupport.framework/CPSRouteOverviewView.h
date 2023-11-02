
@interface CPSRouteOverviewView : UIView {
    CPTravelEstimates * _currentTravelEstimates;
    CPSHidingLabel * _destinationAddress;
    UILabel * _destinationName;
    CPSRouteEstimatesView * _estimatesView;
    CPTrip * _representedTrip;
    NSString * _routeNote;
    CPSHidingLabel * _routeNoteLabel;
}

@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic, readonly) CPSHidingLabel *destinationAddress;
@property (nonatomic, readonly) UILabel *destinationName;
@property (nonatomic, readonly) CPSRouteEstimatesView *estimatesView;
@property (nonatomic, readonly) CPTrip *representedTrip;
@property (nonatomic, copy) NSString *routeNote;
@property (nonatomic, readonly) CPSHidingLabel *routeNoteLabel;

+ (void)_applyBoldText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4;
+ (void)_applyText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4;
+ (id)_multilineLabel;
+ (id)_nameForMapItem:(id)arg1;
+ (id)_shortenedAddressForAddress:(id)arg1;

- (void).cxx_destruct;
- (void)_updateTripEstimateStyle;
- (id)currentTravelEstimates;
- (id)destinationAddress;
- (id)destinationName;
- (id)estimatesView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)representedTrip;
- (id)routeNote;
- (id)routeNoteLabel;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setRepresentedTrip:(id)arg1;
- (void)setRouteNote:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
