
@protocol AEBrowserLayoutDelegate <NSObject>

@required

- (bool)layout:(AESceneGroupedTilingLayout *)arg1 shouldShowCloudDecorationAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layout:(AESceneGroupedTilingLayout *)arg1 shouldShowLoopDecorationAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layout:(AESceneGroupedTilingLayout *)arg1 shouldShowVideoDecorationAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;

@end
