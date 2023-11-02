
@protocol TLKImageViewDelegate <NSObject>

@required

- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(UIImage *)arg1;

@end
