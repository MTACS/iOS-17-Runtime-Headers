
@protocol GKImageRequestDelegate

@required

- (void)imageRequest:(GKImageRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)imageRequest:(GKImageRequest *)arg1 didLoadImage:(UIImage *)arg2;

@end
