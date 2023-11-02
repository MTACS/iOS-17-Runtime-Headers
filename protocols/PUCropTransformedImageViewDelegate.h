
@protocol PUCropTransformedImageViewDelegate <NSObject>

@required

- (void)cropTransformedImageViewDidEndTracking:(PUCropTransformedImageView *)arg1;
- (void)cropTransformedImageViewDidTrack:(PUCropTransformedImageView *)arg1;
- (void)cropTransformedImageViewWillBeginTracking:(PUCropTransformedImageView *)arg1;

@end
