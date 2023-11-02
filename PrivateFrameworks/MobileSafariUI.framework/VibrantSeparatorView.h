
@interface VibrantSeparatorView : UIView {
    UIView * _colorBurn;
    UIColor * _nonVibrantColor;
    UIView * _plusD;
    bool  _usesVibrantEffect;
}

@property (nonatomic, retain) UIColor *nonVibrantColor;
@property (nonatomic) bool usesVibrantEffect;

- (void).cxx_destruct;
- (id)nonVibrantColor;
- (void)setNonVibrantColor:(id)arg1;
- (void)setUsesVibrantEffect:(bool)arg1;
- (bool)usesVibrantEffect;

@end
