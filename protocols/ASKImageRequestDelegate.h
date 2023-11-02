
@protocol ASKImageRequestDelegate

@required

- (void)imageRequest:(ASKImageRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)imageRequest:(ASKImageRequest *)arg1 didLoadImage:(UIImage *)arg2;

@end
