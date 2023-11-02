
@protocol EKTravelRouteEstimationControllerDelegate <NSObject>

@optional

- (void)routeEstimationControllerDidBeginOriginLocationLookup:(EKTravelRouteEstimationController *)arg1;
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(EKTravelRouteEstimationController *)arg1;
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(EKTravelRouteEstimationController *)arg1;
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(EKTravelRouteEstimationController *)arg1;

@end
