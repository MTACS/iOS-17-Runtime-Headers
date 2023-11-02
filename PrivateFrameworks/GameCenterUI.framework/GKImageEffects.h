
@interface GKImageEffects : NSObject

+ (id)imageByApplyingBlurToImage:(id)arg1 withRadius:(double)arg2 tintColor:(id)arg3 saturationDeltaFactor:(double)arg4 maskImage:(id)arg5;
+ (id)imageByApplyingDarkEffectToImage:(id)arg1;
+ (id)imageByApplyingExtraLightEffectToImage:(id)arg1;
+ (id)imageByApplyingLightEffectToImage:(id)arg1;
+ (id)imageByApplyingTintEffectWithColor:(id)arg1 toImage:(id)arg2;

@end
