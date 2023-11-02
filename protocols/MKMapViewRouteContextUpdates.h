
@protocol MKMapViewRouteContextUpdates <NSObject>

@required

- (void)_setAlternateRouteContextAnnotationETAComparison:(unsigned char)arg1 forRoute:(GEOComposedRoute *)arg2;
- (void)_setRouteContextAnnotationFocus:(bool)arg1 forRoute:(GEOComposedRoute *)arg2;
- (void)_setRouteContextAnnotationText:(NSString *)arg1 etaType:(long long)arg2 tollCurrency:(unsigned char)arg3 advisoryStyleAttributes:(GEOStyleAttributes *)arg4 forRoute:(GEOComposedRoute *)arg5;
- (void)_setRouteContextAnnotationTexts:(NSArray *)arg1 forLegsInRoute:(GEOComposedRoute *)arg2;
- (void)_setRouteContextInspectedSegmentIndex:(unsigned long long)arg1 inspectedStepIndex:(unsigned long long)arg2;
- (void)_updateWaypointCaptions;

@end
