
@interface GKLocalImageSource : GKImageSource {
    NSMapTable * _keysForSizes;
}

@property (nonatomic, retain) NSMapTable *keysForSizes;

- (void).cxx_destruct;
- (void)cacheImageUsingGamed:(id)arg1 cacheSubdirectory:(id)arg2 withHandler:(id /* block */)arg3;
- (void)cachedImageFromGamedWithSubdirectory:(id)arg1 handler:(id /* block */)arg2;
- (void)deleteImageUsingGamedWithSubdirectory:(id)arg1 withHandler:(id /* block */)arg2;
- (id)imageForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)keyForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)keysForSizes;
- (void)setKeysForSizes:(id)arg1;

@end
