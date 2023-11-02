
@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap> {
    struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> { 
        struct __compressed_pair<md::GlobeAdapter *, std::default_delete<md::GlobeAdapter>> { 
            struct GlobeAdapter {} *__value_; 
        } __ptr_; 
    }  _globeAdapter;
    void * _globeView;
    void * _loadingStatusTracker;
    VKCamera * _vkCamera;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateViewport;
- (void)cancelTileRequests;
- (void)dealloc;
- (void)didLayout;
- (id)initWithMapEngine:(void*)arg1;
- (void)setMapType:(int)arg1;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (void)willDealloc;

@end
