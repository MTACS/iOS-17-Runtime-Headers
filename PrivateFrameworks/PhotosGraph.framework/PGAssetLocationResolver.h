
@interface PGAssetLocationResolver : NSObject

+ (id)closestAddressNodeFromMomentNodes:(id)arg1 toLocation:(id)arg2 withMaximumDistance:(double)arg3 allowRemoteLocations:(bool)arg4;
+ (id)closestAssetLocationForAsset:(id)arg1 inAssetCollection:(id)arg2;

@end
