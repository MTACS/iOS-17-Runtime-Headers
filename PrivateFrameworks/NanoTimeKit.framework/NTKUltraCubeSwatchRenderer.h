
@interface NTKUltraCubeSwatchRenderer : NSObject {
    NSCache * _swatchCache;
}

+ (id)_sharedRenderer;
+ (id)cachedSwatchForKey:(id)arg1;
+ (bool)containsSwatchForKey:(id)arg1;
+ (id)renderSwatchForContentView:(id)arg1 device:(id)arg2 key:(id)arg3;
+ (void)renderSwatchForContentView:(id)arg1 device:(id)arg2 key:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_ca_renderSwatchWithCARenderServer:(id)arg1 forDevice:(id)arg2;
- (id)_cachedSwatchImageForKey:(id)arg1;
- (id)_init;
- (bool)_isCATransactionCommitting;
- (id)_renderSwatchForContentView:(id)arg1 device:(id)arg2 key:(id)arg3;
- (void)_renderSwatchForContentView:(id)arg1 device:(id)arg2 key:(id)arg3 completion:(id /* block */)arg4;
- (void)_setSwatchImage:(id)arg1 forKey:(id)arg2;
- (id)_ui_renderSwatchWithCARenderServer:(id)arg1 forDevice:(id)arg2;

@end
