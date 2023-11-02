
@interface CABasicAnimation : CAPropertyAnimation

@property (retain) id byValue;
@property double endAngle;
@property (retain) id fromValue;
@property bool roundsToInteger;
@property double startAngle;
@property (retain) id toValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (void)CA_prepareRenderValue;
- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (double)_timeFunction:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)byValue;
- (double)endAngle;
- (id)fromValue;
- (bool)roundsToInteger;
- (void)setByValue:(id)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setFromValue:(id)arg1;
- (void)setRoundsToInteger:(bool)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setToValue:(id)arg1;
- (double)startAngle;
- (id)toValue;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_animationForKeyPath:(id)arg1 from:(id)arg2 to:(id)arg3 beginAfter:(double)arg4 duration:(double)arg5 keepFinalFrame:(bool)arg6;
+ (id)cps_nullAnimationWithDuration:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)pkui_updateForAdditiveAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)pkui_updateForAdditiveAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 withLayerPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)pkui_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2;
- (void)pkui_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2 withLayerScalar:(double)arg3;
- (void)pkui_updateForAdditiveAnimationFromSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (void)pkui_updateForAdditiveAnimationFromSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withLayerSize:(struct CGSize { double x1; double x2; })arg3;
- (void)pkui_updateForAdditiveAnimationFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 toTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2;
- (void)pkui_updateForAdditiveAnimationFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 toTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 withLayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;

// Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore

- (void)_suic_updateForAdditiveAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_suic_updateForAdditiveAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 withLayerPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)_suic_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2;
- (void)_suic_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2 withLayerScalar:(double)arg3;
- (void)_suic_updateForAdditiveAnimationFromSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_suic_updateForAdditiveAnimationFromSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withLayerSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_suic_updateForAdditiveAnimationFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 toTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2;
- (void)_suic_updateForAdditiveAnimationFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 toTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 withLayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (void)p_getValue:(id*)arg1 animationPercent:(double*)arg2 atTime:(double)arg3 initialValue:(id)arg4;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)TSDCAAnimationContextCache;

@end
