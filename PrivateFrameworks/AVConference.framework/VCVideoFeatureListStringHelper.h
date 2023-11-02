
@interface VCVideoFeatureListStringHelper : NSObject

+ (void)aspectRatioPortrait:(struct CGSize { double x1; double x2; }*)arg1 landscape:(struct CGSize { double x1; double x2; }*)arg2 isMismatchedOrientation:(bool)arg3;
+ (int)defaultPayload:(struct __CFDictionary { }*)arg1;
+ (id)deriveAspectRatioFLS;
+ (id)deriveAspectRatioFLSWithPortraitRatio:(struct CGSize { double x1; double x2; })arg1 landscapeRatio:(struct CGSize { double x1; double x2; })arg2 expectedPortraitRatio:(struct CGSize { double x1; double x2; })arg3 expectedLandscapeRatio:(struct CGSize { double x1; double x2; })arg4;
+ (bool)extractAspectRatios:(const char *)arg1 landscapeX:(int*)arg2 landscapeY:(int*)arg3 portraitX:(int*)arg4 portraitY:(int*)arg5;
+ (bool)extractAspectRatios:(const char *)arg1 prefix:(const char *)arg2 landscapeX:(int*)arg3 landscapeY:(int*)arg4 portraitX:(int*)arg5 portraitY:(int*)arg6;
+ (bool)extractExpectedAspectRatios:(const char *)arg1 expectedLandscapeX:(int*)arg2 expectedLandscapeY:(int*)arg3 expectedPortraitX:(int*)arg4 expectedPortraitY:(int*)arg5;
+ (id)extractKeyAndValueStringFromFeatureString:(id)arg1 prefix:(id)arg2;
+ (bool)featureListString:(char *)arg1 maxSize:(long long)arg2 payload:(int)arg3 featureListStrings:(struct __CFDictionary { }*)arg4;
+ (bool)findFeatureString:(const char *)arg1 value:(char *)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char *)arg4;
+ (void)fixInvalidAspectRatioPortrait:(struct CGSize { double x1; double x2; }*)arg1 landscape:(struct CGSize { double x1; double x2; }*)arg2;
+ (bool)isResizePIPSupportedInFeatureListString:(id)arg1;
+ (id)newEmptyFeatureString;
+ (id)newEmptyFeatureStringWithPayload:(int)arg1;
+ (id)newFeatureListStringsDictForGroupID:(unsigned int)arg1 isOneToOne:(bool)arg2;
+ (id)newLocalFeaturesStringFixedPositionWithType:(unsigned char)arg1;
+ (id)newLocalFeaturesStringWithType:(unsigned char)arg1;
+ (id)newLocalFeaturesStringWithType:(unsigned char)arg1 aspectRatioFLS:(id)arg2 version:(long long)arg3;
+ (id)newLocalFeaturesStringWithVCP:(id)arg1 aspectRatioFLS:(id)arg2;
+ (id)newScreenFeatureString;
+ (id)retrieveVCPFeaturesStringWithType:(unsigned char)arg1 version:(long long)arg2;

@end
