
@interface TUIKeyboardInputModeIconRendererConfiguration : NSObject {
    NSString * _artwork;
    double  _baseFontSize;
    NSString * _language;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _style;
    UIColor * _tintColor;
}

@property (nonatomic, copy) NSString *artwork;
@property (nonatomic) double baseFontSize;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) long long style;
@property (nonatomic, copy) UIColor *tintColor;

- (void).cxx_destruct;
- (id)artwork;
- (double)baseFontSize;
- (id)language;
- (void)setArtwork:(id)arg1;
- (void)setBaseFontSize:(double)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (long long)style;
- (id)tintColor;

@end
