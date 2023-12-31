
@interface CAPropertyAnimation : CAAnimation

@property (getter=isAdditive) bool additive;
@property (getter=isCumulative) bool cumulative;
@property (copy) NSString *keyPath;
@property (retain) CAValueFunction *valueFunction;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)animationWithKeyPath:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (bool)additive;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)cumulative;
- (bool)isAdditive;
- (bool)isCumulative;
- (id)keyPath;
- (void)setAdditive:(bool)arg1;
- (void)setCumulative:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValueFunction:(id)arg1;
- (id)valueFunction;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

- (bool)avt_isUseless;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentFromAnimationTime:(double)arg1;
- (bool)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)p_adjustedResultWithValue:(id)arg1;
- (id)p_interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)TSDCAAnimationContextCache;

@end
