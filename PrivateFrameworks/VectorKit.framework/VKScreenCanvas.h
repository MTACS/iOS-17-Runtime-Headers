
@interface VKScreenCanvas : NSObject {
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    ARSession * _arSession;
    struct shared_ptr<gdc::Camera> { 
        struct Camera {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _camera;
    VKCameraController * _cameraController;
    bool  _deallocing;
    <MDRenderTarget> * _displayTarget;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _fullyOccludedEdgeInsets;
    <MDMapControllerDelegate> * _mapDelegate;
    void * _mapEngine;
    struct RunLoopController { struct MapEngine {} *x1; long long x2; } * _runLoopController;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _userIsGesturing;
    struct PerspectiveView<double> { 
        struct RigidTransform<double, double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _translation; 
            struct Quaternion<double> { 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } _imaginary; 
                double _scalar; 
            } _rotation; 
        } _transform; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _projectionMatrix; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _inverseProjection; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _matrix; 
        double _ndcZNear; 
        double _aspectRatio; 
        struct ViewSize { 
            unsigned short width; 
            unsigned short height; 
        } _size; 
        int _type; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _verticalFOV; 
        double _near; 
        double _far; 
    }  _view;
    struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKCamera *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _vkCamera;
}

@property (nonatomic) struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; } camera;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isGesturing, nonatomic) bool gesturing;
@property (nonatomic) <MDMapControllerDelegate> *mapDelegate;
@property (nonatomic, readonly) void*mapEngine;
@property (nonatomic) /* Warning: unhandled struct encoding: '{_retain_ptr<VKCamera *' */ struct  vkCamera; /* unknown property attribute:  geo::_equal_objc>=^^?@{_retain_objc_arc=}{_release_objc_arc=}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })camera;
- (id)cameraController;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didBecomeInActive;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(bool)arg1 beAggressive:(bool)arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)enterARSessionAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)exitARSession;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (id)initWithMapEngine:(void*)arg1 inBackground:(bool)arg2;
- (bool)isGesturing;
- (id)mapDelegate;
- (void*)mapEngine;
- (id)markerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1 enableExtendedFeatureMarkers:(bool)arg2;
- (void)runAnimation:(id)arg1;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCameraController:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setVkCamera:(struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; struct _retain_objc_arc { } x3; struct _release_objc_arc { } x4; })arg1;
- (long long)tileSize;
- (void)transferStateFromCanvas:(id)arg1;
- (void)updateCameraForFrameResize;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; struct _retain_objc_arc { } x3; struct _release_objc_arc { } x4; })vkCamera;
- (bool)wantsTimerTick;

@end
