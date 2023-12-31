
@interface DEDImageResourceManager : NSObject {
    NSMutableDictionary * _imageCache;
    ResourceLoader * _loader;
}

@property (retain) NSMutableDictionary *imageCache;
@property (retain) ResourceLoader *loader;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)cachedImageFromKey:(id)arg1;
- (id)imageCache;
- (id)loader;
- (void)setImageCache:(id)arg1;
- (void)setLoader:(id)arg1;

@end
