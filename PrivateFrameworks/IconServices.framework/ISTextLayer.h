
@interface ISTextLayer : ISLayer {
    IFColor * _color;
    NSString * _fontName;
    double  _fontSize;
    NSString * _text;
}

@property (nonatomic, retain) IFColor *color;
@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)color;
- (id)fontName;
- (double)fontSize;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
