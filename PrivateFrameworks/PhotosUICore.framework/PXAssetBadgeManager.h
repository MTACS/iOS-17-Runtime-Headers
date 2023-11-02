
@interface PXAssetBadgeManager : NSObject

+ (id)defaultManager;

- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(unsigned long long)arg3;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })badgeInfoForCollection:(id)arg1 options:(unsigned long long)arg2;

@end
