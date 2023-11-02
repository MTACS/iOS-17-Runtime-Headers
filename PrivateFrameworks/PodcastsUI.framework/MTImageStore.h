
@interface MTImageStore : IMImageStore <MTImageStoreProtocol>

+ (id)defaultBasePath;
+ (unsigned long long)defaultMaxConcurrentOperations;
+ (double)defaultMaxImageDimensionInPixels;
+ (id)defaultPodcastArtworkWithWidth:(double)arg1;
+ (id)defaultStore;

- (void)addImage:(id)arg1 forKey:(id)arg2;
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 resizeOptions:(int)arg3 modifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)imageForKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 resizeOptions:(int)arg3 modifier:(id)arg4;
- (id)initWithName:(id)arg1 basePath:(id)arg2 maxImageDimensionInPixels:(double)arg3 maxConcurrentOperations:(unsigned long long)arg4 alternativeSizeBlock:(id /* block */)arg5;
- (bool)requireSquareImages:(id)arg1;

@end
