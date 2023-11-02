
@interface CNUIPRLikenessLoadingGroupPlaceholderProvider : CNUIPRLikenessLoadingPlaceholderProvider {
    unsigned long long  _backgroundStyle;
}

@property (nonatomic, readonly) unsigned long long backgroundStyle;

- (unsigned long long)backgroundStyle;
- (id)initWithBackgroundStyle:(unsigned long long)arg1;
- (struct CGImage { }*)renderCircularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)renderRoundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end
