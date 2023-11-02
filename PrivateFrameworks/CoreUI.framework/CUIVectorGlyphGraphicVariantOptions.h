
@interface CUIVectorGlyphGraphicVariantOptions : NSObject <NSCopying> {
    id  borderColor;
    double  borderWidth;
    long long  contentEffect;
    long long  fill;
    NSArray * fillColors;
    long long  imageAlignment;
    long long  imageCentering;
    struct CGSize { 
        double width; 
        double height; 
    }  imageOffset;
    long long  imageScaling;
    id  monochromeForegroundColor;
    double  roundedRectCornerRadius;
    long long  shape;
    long long  shapeEffect;
}

@property (nonatomic, retain) id borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long contentEffect;
@property (nonatomic) long long fill;
@property (nonatomic, copy) NSArray *fillColors;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) long long imageCentering;
@property (nonatomic) struct CGSize { double x1; double x2; } imageOffset;
@property (nonatomic) long long imageScaling;
@property (nonatomic, retain) id monochromeForegroundColor;
@property (nonatomic) double roundedRectCornerRadius;
@property (nonatomic) long long shape;
@property (nonatomic) long long shapeEffect;

+ (double)defaultSymbolPointSizeRatio;

- (bool)_areValid;
- (id)borderColor;
- (double)borderWidth;
- (long long)contentEffect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)fill;
- (id)fillColors;
- (unsigned long long)hash;
- (long long)imageAlignment;
- (long long)imageCentering;
- (struct CGSize { double x1; double x2; })imageOffset;
- (long long)imageScaling;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)monochromeForegroundColor;
- (double)roundedRectCornerRadius;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setContentEffect:(long long)arg1;
- (void)setFill:(long long)arg1;
- (void)setFillColors:(id)arg1;
- (void)setImageAlignment:(long long)arg1;
- (void)setImageCentering:(long long)arg1;
- (void)setImageOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageScaling:(long long)arg1;
- (void)setMonochromeForegroundColor:(id)arg1;
- (void)setRoundedRectCornerRadius:(double)arg1;
- (void)setShape:(long long)arg1;
- (void)setShapeEffect:(long long)arg1;
- (long long)shape;
- (long long)shapeEffect;

@end
