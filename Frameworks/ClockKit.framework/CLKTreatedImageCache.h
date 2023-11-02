
@interface CLKTreatedImageCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableArray * _recentlyUsedKeys;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_imageForKey:(id)arg1;
- (void)_queue_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)arg1 maxSDKSize:(struct CGSize { double x1; double x2; })arg2 maxDeviceSize:(struct CGSize { double x1; double x2; })arg3 cornerRadius:(double)arg4;
- (id)imageForRawImage:(id)arg1 maxSDKSize:(struct CGSize { double x1; double x2; })arg2 maxDeviceSize:(struct CGSize { double x1; double x2; })arg3 maskMode:(long long)arg4;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 cornerRadius:(double)arg4;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 maskMode:(long long)arg4;
- (id)init;
- (void)purgeCache;

@end
