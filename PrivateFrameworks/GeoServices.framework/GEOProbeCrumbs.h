
@interface GEOProbeCrumbs : NSObject {
    int  _baseDistance;
    int  _baseE7Lat;
    int  _baseE7Lng;
    unsigned long long  _baseTimestamp;
    unsigned long long  _crumbCounter;
    bool  _enabled;
    struct deque<_GEOProbeCrumbsLocation, std::allocator<_GEOProbeCrumbsLocation>> { 
        struct __split_buffer<_GEOProbeCrumbsLocation *, std::allocator<_GEOProbeCrumbsLocation *>> { 
            struct _GEOProbeCrumbsLocation {} **__first_; 
            struct _GEOProbeCrumbsLocation {} **__begin_; 
            struct _GEOProbeCrumbsLocation {} **__end_; 
            struct __compressed_pair<_GEOProbeCrumbsLocation **, std::allocator<_GEOProbeCrumbsLocation *>> { 
                struct _GEOProbeCrumbsLocation {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<_GEOProbeCrumbsLocation>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _locations;
    unsigned long long  _maxCrumbs;
    GEOComposedRoute * _route;
}

@property (nonatomic, readonly) bool enabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_encodedDataForIntegersCount:(unsigned int)arg1 valueCallback:(id /* block */)arg2;
- (void)addLocation:(struct { double x1; double x2; })arg1 polyCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 timestamp:(unsigned long long)arg3;
- (void)clearCache;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (id)initWithRoute:(id)arg1;
- (id)recentLocationHistory;
- (void)resetStateWithRoute:(id)arg1;

@end
