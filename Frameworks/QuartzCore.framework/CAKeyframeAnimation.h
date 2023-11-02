
@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray *biasValues;
@property (copy) NSString *calculationMode;
@property (copy) NSArray *continuityValues;
@property (copy) NSArray *keyTimes;
@property struct CGPath { }*path;
@property (copy) NSString *rotationMode;
@property (copy) NSArray *tensionValues;
@property (copy) NSArray *timingFunctions;
@property (copy) NSArray *values;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (void)CA_prepareRenderValue;
- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)biasValues;
- (id)calculationMode;
- (id)continuityValues;
- (id)keyTimes;
- (struct CGPath { }*)path;
- (id)rotationMode;
- (void)setBiasValues:(id)arg1;
- (void)setCalculationMode:(id)arg1;
- (void)setContinuityValues:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setRotationMode:(id)arg1;
- (void)setTensionValues:(id)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setValues:(id)arg1;
- (id)tensionValues;
- (id)timingFunctions;
- (id)values;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (bool)SCN_evaluateAtTime:(double)arg1 reverse:(bool)arg2 to:(void*)arg3;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (void)p_getValue:(id*)arg1 animationPercent:(double*)arg2 atTime:(double)arg3 initialValue:(id)arg4;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)normalizedKeyframeAnimationWithKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)TSDCAAnimationContextCache;

@end
