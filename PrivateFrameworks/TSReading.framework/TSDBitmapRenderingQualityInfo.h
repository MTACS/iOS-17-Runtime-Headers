
@interface TSDBitmapRenderingQualityInfo : NSObject {
    float  mCanvasScale;
    NSMutableDictionary * mImageMap;
    int  mQuality;
}

@property (nonatomic, readonly) int quality;

- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (struct CGImage { }*)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;
- (int)quality;

@end
