
@interface LPGlyphStyle : NSObject {
    LPPointUnit * _baselineOffset;
    UIColor * _color;
    LPImage * _image;
    LPImageViewStyle * _imageStyle;
    double  _opacity;
    LPPadding * _padding;
}

@property (nonatomic, retain) LPPointUnit *baselineOffset;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, readonly) LPImageViewStyle *imageStyle;
@property (nonatomic) double opacity;
@property (nonatomic, readonly, retain) LPPadding *padding;

- (void).cxx_destruct;
- (id)baselineOffset;
- (id)color;
- (id)image;
- (id)imageStyle;
- (id)init;
- (id)initSearchGlyph;
- (double)opacity;
- (id)padding;
- (void)setBaselineOffset:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setOpacity:(double)arg1;

@end
