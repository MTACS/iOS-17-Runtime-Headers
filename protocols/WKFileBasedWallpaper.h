
@protocol WKFileBasedWallpaper <WKWallpaper>

@required

- (NSURL *)fullsizeImageURL;
- (double)stillTimeInVideo;
- (NSURL *)videoAssetURL;

@end
