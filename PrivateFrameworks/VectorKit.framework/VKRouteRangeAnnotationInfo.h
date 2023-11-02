
@interface VKRouteRangeAnnotationInfo : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _end;
    VKRouteEtaDescription * _etaDescription;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _start;
}

@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } end;
@property (nonatomic, readonly) VKRouteEtaDescription *etaDescription;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } start;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })end;
- (id)etaDescription;
- (id)initWithEtaDescription:(id)arg1 start:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 end:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3;
- (bool)isEqual:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })start;

@end
