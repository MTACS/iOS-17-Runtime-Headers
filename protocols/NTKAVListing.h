
@protocol NTKAVListing <NSObject>

@required

- (void)discardAssets;
- (bool)snapshotDiffers:(id <NTKAVListing>)arg1;
- (CLKVideo *)video;

@end
