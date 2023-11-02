
@protocol CPSTripInitiating <NSObject>

@required

- (void)tripView:(CPSTripPreviewsCardView *)arg1 selectedTrip:(CPTrip *)arg2 routeChoice:(CPRouteChoice *)arg3;
- (void)tripView:(CPSTripPreviewsCardView *)arg1 startedTrip:(CPTrip *)arg2 routeChoice:(CPRouteChoice *)arg3;

@end
