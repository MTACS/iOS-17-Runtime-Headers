
@protocol PXDisplayAssetVideoContentProviderRequestDelegate <NSObject>

@required

- (void)request:(PXDisplayAssetVideoContentProviderRequest *)arg1 didFinishWithPlayerItem:(AVPlayerItem *)arg2 videoURL:(NSURL *)arg3 downloadedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 info:(NSDictionary *)arg5;
- (void)requestLoadingProgressDidChange:(PXDisplayAssetVideoContentProviderRequest *)arg1;

@end
