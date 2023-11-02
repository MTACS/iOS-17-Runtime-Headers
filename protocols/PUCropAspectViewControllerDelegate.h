
@protocol PUCropAspectViewControllerDelegate

@required

- (void)cropAspectController:(PUCropAspectViewController *)arg1 cropAspectSelected:(PUCropAspect *)arg2;
- (void)cropAspectFlipperView:(PUCropAspectFlipperView *)arg1 cropOrientationSelected:(long long)arg2;

@end
