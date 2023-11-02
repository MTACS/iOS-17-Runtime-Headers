
@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    struct shared_ptr<md::Anchor> { 
        struct Anchor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _anchor;
    void * _anchorManager;
    const void * _cameraContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    <MDRenderTarget> * _displayLayer;
    bool  _followsTerrain;
    bool  _isUpdating;
    struct Coordinate3D<geo::Degrees, double> { 
        struct Unit<geo::DegreeUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<geo::DegreeUnitDescription, double> { 
            double _value; 
        } longitude; 
        struct Unit<geo::MeterUnitDescription, double> { 
            double _value; 
        } altitude; 
    }  _lastCoordinate;
    double  _pointsPerMeter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenPointInCanvas;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } coordinate3D;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MDRenderTarget> *displayLayer;
@property (nonatomic, readonly) double elevationOffset;
@property (nonatomic) bool followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<md::Anchor> { struct Anchor {} *x1; struct __shared_weak_count {} *x2; })_anchorWithContext:(void*)arg1;
- (void)_updateCachedPoint;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (struct { double x1; double x2; })coordinate;
- (struct { double x1; double x2; double x3; })coordinate3D;
- (void)dealloc;
- (void)destroyAnchor;
- (id)displayLayer;
- (double)elevationOffset;
- (bool)followsTerrain;
- (void)layoutWithContext:(const void*)arg1;
- (struct CGPoint { double x1; double x2; })pointInLayer:(id)arg1 bound:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (void)prepare:(struct CGSize { double x1; double x2; })arg1 cameraContext:(const void*)arg2 anchorContext:(const struct AnchorContext { struct AnchorManager {} *x1; }*)arg3;
- (void)setDisplayLayer:(id)arg1;
- (void)setFollowsTerrain:(bool)arg1;
- (void)updateIfNeeded;

@end
