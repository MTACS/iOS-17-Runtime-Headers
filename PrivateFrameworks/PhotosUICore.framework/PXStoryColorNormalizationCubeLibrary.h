
@interface PXStoryColorNormalizationCubeLibrary : NSObject {
    struct CGColorSpace { } * _colorspace;
    long long  _cubeEdgeSize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableIndexSet * _lock_activeRequests;
    NSMapTable * _lock_aliveCubesByAssetNormalization;
    NSCache * _lock_cubeByAssetNormalization;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cacheColorCube:(id)arg1 forAssetNormalization:(id)arg2;
- (bool)_isRequestActive:(long long)arg1;
- (void)_queue_performRequestWithID:(long long)arg1 forAssetNormalization:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelRequest:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithColorSpace:(struct CGColorSpace { }*)arg1;
- (long long)requestColorCubeForAssetNormalization:(id)arg1 completionHandler:(id /* block */)arg2;

@end
