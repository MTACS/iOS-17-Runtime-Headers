
@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting> {
    CPSAlternateRoutesView * _alternatesView;
}

@property (nonatomic, readonly) CPSAlternateRoutesView *alternatesView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (id)alternatesView;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (id)preferredFocusEnvironments;
- (void)setSelectedTrip:(id)arg1;

@end
