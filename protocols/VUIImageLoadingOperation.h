
@protocol VUIImageLoadingOperation <NSObject>

@required

- (bool)cropToFit;
- (NSError *)error;
- (TVImage *)image;
- (struct CGSize { double x1; double x2; })scaleToSize;
- (unsigned long long)scalingResult;

@end
