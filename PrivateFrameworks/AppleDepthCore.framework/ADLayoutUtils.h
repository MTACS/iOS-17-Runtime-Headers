
@interface ADLayoutUtils : NSObject

// Image: /System/Library/PrivateFrameworks/AppleDepthCore.framework/AppleDepthCore

+ (bool)aspectRatio:(float)arg1 matchesAspectRatio:(float)arg2;
+ (float)aspectRatioForKnownLayout:(unsigned long long)arg1;
+ (bool)isLandscape:(unsigned long long)arg1;
+ (bool)isLandscapeSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)layoutAsString:(unsigned long long)arg1;
+ (unsigned long long)layoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (unsigned long long)transposeLayout:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth

+ (unsigned long long)adjustLayout:(unsigned long long)arg1 sourceOrientation:(unsigned int)arg2 toRotationPreference:(unsigned long long)arg3;

@end
