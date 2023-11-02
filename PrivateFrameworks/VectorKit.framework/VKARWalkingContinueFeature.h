
@interface VKARWalkingContinueFeature : VKARWalkingFeature {
    struct _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSString *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _displayText;
    struct GEOPolylineCoordinateRange { 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } start; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _range;
    struct _retain_ptr<GEOComposedRoute *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        GEOComposedRoute *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _route;
}

@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } range;
@property (nonatomic, readonly) GEOComposedRoute *route;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)displayText;
- (id)initWithRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 displayText:(id)arg3;
- (id)initWithRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 displayText:(id)arg3 continuePriority:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })range;
- (id)route;
- (void)setDisplayText:(id)arg1;
- (void)setRoute:(id)arg1;

@end
