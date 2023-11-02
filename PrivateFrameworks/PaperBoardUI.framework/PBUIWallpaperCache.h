
@interface PBUIWallpaperCache : NSObject {
    BSUIMappedImageCache * _imageCache;
    NSURL * _imageCachePath;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) BSUIMappedImageCache *imageCache;

+ (id)wallpaperCache;

- (void).cxx_destruct;
- (id)colorBoxesForKey:(id)arg1 generatingIfNeceesaryFromImage:(id)arg2;
- (id)imageCache;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(id /* block */)arg2;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)imageURLForKey:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)removeEverythingWithCompletion:(id /* block */)arg1;
- (void)warmupForKey:(id)arg1;

@end
