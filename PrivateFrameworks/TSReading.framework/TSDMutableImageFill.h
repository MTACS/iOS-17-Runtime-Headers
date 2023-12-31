
@interface TSDMutableImageFill : TSDImageFill

@property (nonatomic) struct CGSize { double x1; double x2; } fillSize;
@property (nonatomic, retain) TSPData *imageData;
@property (nonatomic) bool interpretsUntaggedImageDataAsGeneric;
@property (nonatomic) int technique;
@property (nonatomic, copy) TSUColor *tintColor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFillSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageData:(id)arg1;
- (void)setInterpretsUntaggedImageDataAsGeneric:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setTechnique:(int)arg1;
- (void)setTintColor:(id)arg1;

@end
