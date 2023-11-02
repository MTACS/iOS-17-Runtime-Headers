
@interface CLKUIAnalogHandFactory : NSObject

+ (id)_createHandImageWithSize:(struct CGSize { double x1; double x2; })arg1 paths:(id)arg2 colors:(id)arg3;
+ (id)_createMaskedShadowImageFromShadow:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 maskPath:(struct CGPath { }*)arg3 radius:(double)arg4 opacity:(double)arg5;
+ (id)_createShadowImageSize:(struct CGSize { double x1; double x2; })arg1 path:(struct CGPath { }*)arg2 radius:(double)arg3 opacity:(double)arg4;
+ (id)_getDropShadowImageWithConfiguration:(id)arg1;
+ (id)_getHandImageWithConfiguration:(id)arg1;
+ (id)_getInlayImageWithConfiguration:(id)arg1;
+ (id)_getMaskedDropShadowImageWithConfiguration:(id)arg1 shadowImage:(id)arg2;
+ (id)_getRadialShadowImageWithConfiguration:(id)arg1;
+ (id)_getShadowImageWithConfiguration:(id)arg1 radius:(double)arg2 opacity:(double)arg3 key:(id)arg4;
+ (id)getAssets:(unsigned long long)arg1 forConfiguration:(id)arg2;
+ (struct CGPath { }*)newPathForHourMinuteWithConfiguration:(id)arg1 inset:(double)arg2 includePeg:(bool)arg3;
+ (struct CGPath { }*)newPathForInlayWithConfiguration:(id)arg1 inset:(double)arg2;
+ (struct CGPath { }*)newPathForPeg:(id)arg1 inset:(double)arg2;
+ (struct CGPath { }*)newPathForSecondWithConfiguration:(id)arg1 inset:(double)arg2;
+ (struct CGPath { }*)newPathWithConfiguration:(id)arg1;

@end
