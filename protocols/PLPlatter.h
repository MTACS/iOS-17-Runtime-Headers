
@protocol PLPlatter <PLContentSizeManaging>

@required

- (UIView *)customContentView;
- (bool)hasShadow;
- (bool)isBackgroundBlurred;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setHasShadow:(bool)arg1;

@end
