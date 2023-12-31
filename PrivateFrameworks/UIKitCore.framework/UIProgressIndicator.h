
@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

+ (struct CGSize { double x1; double x2; })size;

- (int)progressIndicatorStyle;
- (void)setAnimating:(bool)arg1;
- (void)setProgressIndicatorStyle:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
