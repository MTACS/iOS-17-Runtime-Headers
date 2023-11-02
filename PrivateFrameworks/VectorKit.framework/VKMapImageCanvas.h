
@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap> {
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKManifestTileGroupObserverProxy *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _manifestTileGroupObserverProxy;
    void * _mapEngine;
    struct shared_ptr<md::OverlayContainer> { 
        struct OverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *overlays;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addOverlay:(id)arg1;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)dealloc;
- (id)initWithMapEngine:(void*)arg1;
- (id)overlays;
- (void)resetCameraController;
- (void)setMapType:(int)arg1;
- (void)tileGroupDidChange;
- (void)updateOverlays;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;

@end
