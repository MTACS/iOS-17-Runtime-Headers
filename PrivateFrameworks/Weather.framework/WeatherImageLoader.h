
@interface WeatherImageLoader : NSObject {
    NSCache * _conditionImagesCache;
    double  _scale;
    CPBitmapStore * _store;
}

@property (nonatomic, retain) NSCache *conditionImagesCache;
@property (nonatomic, retain) CPBitmapStore *store;

+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)cachedImageNamed:(id)arg1 completion:(id /* block */)arg2;
+ (id)colorForImageColor:(id)arg1 lighter:(bool)arg2;
+ (id)conditionImageBundle;
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;
+ (id)conditionImageNamed:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cloudAligned:(bool)arg3 stroke:(bool)arg4 strokeAlpha:(double)arg5 lighterColors:(bool)arg6;
+ (id)conditionImageNamed:(id)arg1 style:(long long)arg2;
+ (id)conditionImageWithConditionIndex:(long long)arg1;
+ (id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2;
+ (void)preloadImages;
+ (id)sharedImageLoader;

- (void).cxx_destruct;
- (id)cachedImageForKey:(id)arg1;
- (id)conditionImagesCache;
- (id)init;
- (void)setConditionImagesCache:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setStore:(id)arg1;
- (id)store;

@end
