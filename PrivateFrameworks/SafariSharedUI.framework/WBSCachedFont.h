
@interface WBSCachedFont : NSObject {
    UIFont * _font;
    long long  _fontDesign;
    long long  _fontWeight;
    double  _size;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long fontDesign;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double size;

- (void).cxx_destruct;
- (id)font;
- (long long)fontDesign;
- (long long)fontWeight;
- (void)setFont:(id)arg1;
- (void)setFontDesign:(long long)arg1;
- (void)setFontWeight:(long long)arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end
