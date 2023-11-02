
@protocol MKArtworkImageSource <NSObject>

@required

- (UIImage *)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(bool)arg2;
- (UIImage *)imageToDisplayWithScreenScale:(double)arg1 nightMode:(bool)arg2;

@end
