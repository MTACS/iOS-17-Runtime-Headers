
@interface _UIImageSymbolLayer : NSObject {
    UIImageAsset * _asset;
    UIColor * _color;
    _UIImageCUIVectorGlyphContent * _content;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    double  _scaleFactor;
}

@property (nonatomic, retain) UIImageAsset *asset;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) _UIImageCUIVectorGlyphContent *content;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) double scaleFactor;
@property (getter=isSystemImage, nonatomic, readonly) bool systemImage;

+ (id)_symbolLayerWithImage:(id)arg1 color:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scaleFactor:(double)arg4;
+ (id)_symbolLayerWithName:(id)arg1 color:(id)arg2;
+ (id)_symbolLayerWithName:(id)arg1 color:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scaleFactor:(double)arg4;
+ (id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2;
+ (id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scaleFactor:(double)arg4;

- (void).cxx_destruct;
- (id)asset;
- (id)color;
- (id)content;
- (bool)isSystemImage;
- (id)name;
- (struct CGPoint { double x1; double x2; })offset;
- (double)scaleFactor;
- (void)setAsset:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScaleFactor:(double)arg1;

@end
