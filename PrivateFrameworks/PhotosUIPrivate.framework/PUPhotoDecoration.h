
@interface PUPhotoDecoration : NSObject <NSCopying> {
    UIColor * _borderColor;
    double  _borderWidth;
    UIColor * _foregroundColor;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic, copy) UIColor *foregroundColor;

+ (id)defaultDecoration;

- (void).cxx_destruct;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)foregroundColor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)photoDecorationVariantsWithIncreasingAlpha:(long long)arg1;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setForegroundColor:(id)arg1;

@end
