
@interface PICinematicVideoUtilities : NSObject

+ (bool)assetIsCinematicVideo:(id)arg1;
+ (id)cinematicMetadataFromAsset:(id)arg1;
+ (bool)currentSystemCanRenderAsset:(id)arg1;
+ (unsigned long long)currentSystemRenderingVersion;
+ (unsigned long long)renderingVersionFromAsset:(id)arg1 error:(out id*)arg2;

@end
