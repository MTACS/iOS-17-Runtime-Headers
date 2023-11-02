
@interface PTRenderDebugLayer : NSObject

- (void)dumpDebug:(id)arg1 renderRequest:(id)arg2 debugTextures:(id)arg3;
- (void)getBiasedDisparityVisualizationRange:(id)arg1;
- (id)initWithMetalContext:(id)arg1 renderEffects:(id)arg2;
- (void)renderDebugLayer:(id)arg1 renderRequest:(id)arg2 inDisparity:(id)arg3 disparityOffset:(float)arg4 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 quality:(int)arg6 edgeTolerance:(float)arg7 debugTextures:(id)arg8 debugRendering:(long long)arg9;
- (void)renderTurbo:(void *)arg1 inTex:(void *)arg2 outRGBA:(void *)arg3 valueOffset:(void *)arg4 valueMinMax:(void *)arg5 valueAbs:(void *)arg6 colorRangeMax:(void *)arg7 channelMultiplier:(void *)arg8 region:(void *)arg9; // needs 9 arg types, found 7: id, id, id, float, bool, float, struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }
- (void)renderTurboMix:(void *)arg1 inTex:(void *)arg2 inRGBA:(void *)arg3 outRGBA:(void *)arg4 valueOffset:(void *)arg5 valueMinMax:(void *)arg6 valueAbs:(void *)arg7 colorRangeMax:(void *)arg8 channelMultiplier:(void *)arg9 mixFraction:(void *)arg10 region:(void *)arg11; // needs 11 arg types, found 9: id, id, id, id, float, bool, float, float, struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }

@end
