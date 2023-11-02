
@interface CIBlendKernel : CIColorKernel

+ (id)cachedKernelWithString:(id)arg1 extentType:(int)arg2;
+ (id)clear;
+ (id)color;
+ (id)colorBurn;
+ (id)colorDodge;
+ (id)componentAdd;
+ (id)componentMax;
+ (id)componentMin;
+ (id)componentMultiply;
+ (id)darken;
+ (id)darkerColor;
+ (id)destination;
+ (id)destinationAtop;
+ (id)destinationIn;
+ (id)destinationOut;
+ (id)destinationOver;
+ (id)difference;
+ (id)divide;
+ (id)exclusion;
+ (id)exclusiveOr;
+ (id)hardLight;
+ (id)hardMix;
+ (id)hue;
+ (id)kernelWithInternalRepresentation:(const void*)arg1;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelWithString:(id)arg1 extentType:(int)arg2;
+ (id)lighten;
+ (id)lighterColor;
+ (id)linearBurn;
+ (id)linearDodge;
+ (id)linearLight;
+ (id)luminosity;
+ (id)multiply;
+ (id)overlay;
+ (id)pinLight;
+ (id)plusDarker;
+ (id)plusLighter;
+ (id)saturation;
+ (id)screen;
+ (id)softLight;
+ (id)source;
+ (id)sourceAtop;
+ (id)sourceIn;
+ (id)sourceOut;
+ (id)sourceOver;
+ (id)subtract;
+ (id)vividLight;

- (id)applyWithForeground:(id)arg1 background:(id)arg2;
- (id)applyWithForeground:(id)arg1 background:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3;
- (bool)getBlendBehaviorBit:(int)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 extentType:(int)arg2;
- (bool)isBackIfForeIsClear;
- (bool)isClearIfBackIsClear;
- (bool)isClearIfForeIsClear;
- (bool)isForeIfBackIsClear;
- (void)setBlendBehaviorBit:(int)arg1 value:(bool)arg2;
- (void)setIsBackIfForeIsClear:(bool)arg1;
- (void)setIsClearIfBackIsClear:(bool)arg1;
- (void)setIsClearIfForeIsClear:(bool)arg1;
- (void)setIsForeIfBackIsClear:(bool)arg1;

@end
