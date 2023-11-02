
@protocol PXCMMEngineDrivenLayoutDelegate <PXEngineDrivenAssetsTilingLayoutDelegate>

@required

- (long long)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;

@end
