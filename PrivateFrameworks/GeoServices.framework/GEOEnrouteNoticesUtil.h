
@interface GEOEnrouteNoticesUtil : NSObject

+ (id)_enrouteNoticesForRoute:(id)arg1 provider:(id)arg2;
+ (void)_forEachGeoEnrouteNoticeOnRoute:(id)arg1 handler:(id /* block */)arg2;
+ (id)createEnrouteNoticesForComposedRoute:(id)arg1 routeInitializerData:(id)arg2;

@end
