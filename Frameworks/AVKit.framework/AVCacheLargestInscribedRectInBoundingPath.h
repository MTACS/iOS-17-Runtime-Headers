
@interface AVCacheLargestInscribedRectInBoundingPath : NSObject {
    NSCache * _cache;
}

@property (retain) NSCache *cache;

- (void).cxx_destruct;
- (id)cache;
- (void)clearCache;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getLargestInscribableRectForView:(id)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 aspectRatio:(double)arg3;
- (id)init;
- (id)retrieveCacheForCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2;
- (void)saveCacheFor:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2 value:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setCache:(id)arg1;

@end
