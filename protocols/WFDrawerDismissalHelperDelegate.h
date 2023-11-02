
@protocol WFDrawerDismissalHelperDelegate <NSObject>

@required

- (double)dismissalRectTopEdgeForCardDismissalHelper:(WFDrawerDismissalHelper *)arg1 coordinateSpace:(id <UICoordinateSpace>)arg2;
- (<WFDrawerDragTracking> *)dragGestureTrackerForCardDismissalHelper:(WFDrawerDismissalHelper *)arg1;
- (void)drawerDismissalHelper:(WFDrawerDismissalHelper *)arg1 requestedDismissalWithVelocity:(double)arg2;

@end
