
@interface _UIStaticBatteryView : _UIBatteryView {
    long long  _inflightBoltAnimationCount;
}

+ (id)_batteryBodyImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 batteryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 filled:(bool)arg6;
+ (id)_batteryBodyImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 batteryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 withBoltCutOutOfSize:(struct CGSize { double x1; double x2; })arg6 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 boltFlipped:(bool)arg8;
+ (id)_batteryBoltImageWithSize:(struct CGSize { double x1; double x2; })arg1 boltSize:(struct CGSize { double x1; double x2; })arg2 forScale:(double)arg3;
+ (id)_batteryBoltMaskImageWithSize:(struct CGSize { double x1; double x2; })arg1 boltSize:(struct CGSize { double x1; double x2; })arg2 forScale:(double)arg3;
+ (id)_batteryFillImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 cornerRadius:(double)arg3;
+ (id)_batteryFillImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 cornerRadius:(double)arg3 withBoltCutOutOfSize:(struct CGSize { double x1; double x2; })arg4 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 boltFlipped:(bool)arg6;
+ (id)_batteryPinImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 complexPinPath:(bool)arg3;
+ (id)_imageByPunchingImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 flippedHorizontally:(bool)arg3 outOfImage:(id)arg4 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 size:(struct CGSize { double x1; double x2; })arg6 scale:(double)arg7;
+ (id)_imageWithRenderedBezierPath:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 pathScaleFactor:(double)arg4 stroke:(bool)arg5 fill:(bool)arg6;
+ (id)_percentFillImageWithSize:(struct CGSize { double x1; double x2; })arg1 forScale:(double)arg2 batteryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5;
+ (id)_renderedImageOfSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withActions:(id /* block */)arg3;

- (double)_batteryBoltLargeScaleFactor;
- (double)_batteryBoltSmallScaleFactor;
- (double)_batteryPathScaleFactor;
- (struct CGSize { double x1; double x2; })_boltPathSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boltRectForTraitCollection:(id)arg1 boltSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_createBodyLayers;
- (void)_createBoltLayersWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_createFillLayer;
- (void)_didFinishAnimatingBoltToVisible:(bool)arg1;
- (void)_updateBatteryFillColor;
- (void)_updateBodyColors;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateBodyLayers;
- (void)_updateFillLayer;
- (bool)_useImagesWithCutoutsForBolt;
- (void)_willBeginAnimatingBoltToVisible:(bool)arg1;
- (void)setLowBatteryMode:(long long)arg1;
- (void)setShowsPercentage:(bool)arg1;

@end
