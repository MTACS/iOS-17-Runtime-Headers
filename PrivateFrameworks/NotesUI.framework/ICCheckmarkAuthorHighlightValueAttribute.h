
@interface ICCheckmarkAuthorHighlightValueAttribute : NSObject <NSCopying> {
    double  _foregroundAlpha;
    UIColor * _highlightColor;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, copy) UIColor *highlightColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)foregroundAlpha;
- (unsigned long long)hash;
- (id)highlightColor;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setHighlightColor:(id)arg1;

@end
