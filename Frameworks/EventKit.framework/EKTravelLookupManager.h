
@interface EKTravelLookupManager : NSObject

+ (id)defaultManager;
+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(id /* block */)arg2;
+ (void)geocodeAddress:(id)arg1 withCompletionBlock:(id /* block */)arg2;

- (void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)findCoordinatesForLocation:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(id /* block */)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(id /* block */)arg5;

@end
