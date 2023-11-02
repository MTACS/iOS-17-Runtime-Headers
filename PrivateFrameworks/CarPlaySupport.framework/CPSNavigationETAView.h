
@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying> {
    UIView * _borderView;
    CPSRouteEstimatesView * _routeEstimatesView;
    CPTrip * _trip;
    unsigned long long  _tripEstimateStyle;
}

@property (nonatomic, retain) UIView *borderView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPSRouteEstimatesView *routeEstimatesView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPTrip *trip;
@property (nonatomic) unsigned long long tripEstimateStyle;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)borderView;
- (void)didMoveToSuperview;
- (id)initWithTrip:(id)arg1 style:(unsigned long long)arg2;
- (void)removeFromSuperview;
- (id)routeEstimatesView;
- (void)setBorderView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setTripEstimateStyle:(unsigned long long)arg1;
- (void)showManeuvers:(id)arg1;
- (id)trip;
- (unsigned long long)tripEstimateStyle;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;

@end
