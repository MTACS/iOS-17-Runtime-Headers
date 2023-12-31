
@interface GEOSnappedRoutePath : NSObject {
    GEOMapRequest * _edgeSearchRequest;
    NSArray * _edges;
    bool  _hasCompletedMapMatching;
    struct unique_ptr<geo::RouteMapMatchingSection, std::default_delete<geo::RouteMapMatchingSection>> { 
        struct __compressed_pair<geo::RouteMapMatchingSection *, std::default_delete<geo::RouteMapMatchingSection>> { 
            struct RouteMapMatchingSection {} *__value_; 
        } __ptr_; 
    }  _mapMatchingSection;
    struct __CFSet { } * _observers;
    GEOComposedRoute * _route;
    unsigned int  _routeEndIndex;
    unsigned int  _routeStartIndex;
    GEOComposedRouteSection * _section;
    unsigned int  _unsnappedPointCount;
    struct GeoCodecsVectorTilePoint3D { float x1; float x2; float x3; } * _unsnappedPoints;
}

@property (readonly) NSArray *edges;
@property (readonly) bool hasCompletedMapMatching;
@property (readonly) bool isMapMatched;
@property (readonly) bool isMapMatching;
@property (readonly) const struct RouteMapMatchingSection { int (**x1)(); }*mapMatchingSection;
@property (readonly) unsigned int routeEndIndex;
@property (readonly) unsigned int routeStartIndex;
@property (readonly) GEOComposedRouteSection *section;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_calculateEdgeLengthFrom:(const void*)arg1 to:(const void*)arg2 startCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 endCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4;
- (void)_debugPrintEdge:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)edges;
- (bool)hasCompletedMapMatching;
- (bool)hasObserver:(id)arg1;
- (id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (bool)isMapMatched;
- (bool)isMapMatching;
- (const struct RouteMapMatchingSection { int (**x1)(); }*)mapMatchingSection;
- (void)matchWithDecoder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerObserver:(id)arg1;
- (unsigned int)routeEndIndex;
- (unsigned int)routeStartIndex;
- (id)section;
- (bool)unregisterObserver:(id)arg1;

@end
