
@interface WFCircularGlyphView : UIView {
    UIView * _backgroundColorView;
    UIColor * _glyphBackgroundColor;
    UIColor * _glyphColor;
    UIImageView * _glyphImageView;
    NSString * _glyphName;
    double  _imagePointSize;
}

@property (nonatomic, retain) UIView *backgroundColorView;
@property (nonatomic, retain) UIColor *glyphBackgroundColor;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic, retain) NSString *glyphName;
@property (nonatomic) double imagePointSize;

- (void).cxx_destruct;
- (id)backgroundColorView;
- (void)configureBackgroundColorView;
- (void)configureGlyphImageView;
- (void)configureViews;
- (id)glyphBackgroundColor;
- (id)glyphColor;
- (id)glyphImage;
- (id)glyphImageView;
- (id)glyphName;
- (double)imagePointSize;
- (id)initWithName:(id)arg1 glyphColor:(id)arg2 backgroundColor:(id)arg3;
- (void)setBackgroundColorView:(id)arg1;
- (void)setGlyphBackgroundColor:(id)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphImageView:(id)arg1;
- (void)setGlyphName:(id)arg1;
- (void)setImagePointSize:(double)arg1;

@end
