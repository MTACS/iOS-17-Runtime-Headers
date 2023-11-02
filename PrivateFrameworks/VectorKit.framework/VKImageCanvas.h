
@interface VKImageCanvas : NSObject {
    struct shared_ptr<gdc::Camera> { 
        struct Camera {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _camera;
    struct _retain_ptr<VKCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKCameraController *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _cameraController;
    <MDRenderTarget> * _displayTarget;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    int  _mapType;
    struct RunLoopController { struct MapEngine {} *x1; long long x2; } * _runLoopController;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKCamera *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _vkCamera;
}

@property (nonatomic, readonly) struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; } camera;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; } taskContext;
@property (nonatomic, readonly) VKCamera *vkCamera;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })camera;
- (void)cancelLoad;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)didLayout;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithMapEngine:(void*)arg1;
- (void)loadScene;
- (id)mapRegion;
- (int)mapType;
- (double)pitch;
- (void)renderSceneWithEngine:(void*)arg1 completion:(struct function<void ()>={__value_func<void ()>={type=[24C] {})arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(int)arg1;
- (struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })taskContext;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (id)vkCamera;
- (double)yaw;

@end
