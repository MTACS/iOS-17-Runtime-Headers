
@interface NIPlatformInfo : NSObject

+ (bool)isInternalBuild;
+ (bool)supportsAoA;
+ (bool)supportsNBAMMS;
+ (bool)supportsSyntheticAperture;
+ (bool)supportsUWB;

@end
