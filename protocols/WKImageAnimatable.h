
@protocol WKImageAnimatable <NSObject>

@required

- (void)startAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)stopAnimating;

@end
