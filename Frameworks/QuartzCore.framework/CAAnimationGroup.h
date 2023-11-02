
@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (void)CA_prepareRenderValue;
- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (id)animations;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setAnimations:(id)arg1;
- (void)setDefaultDuration:(double)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

- (id)avt_animationsByUngroupingRecursively;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (bool)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_getValue:(id*)arg1 animation:(id*)arg2 animationPercent:(double*)arg3 forKeyPath:(id)arg4 atTime:(double)arg5 animationCache:(id)arg6;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)TSDCAAnimationContextCache;

@end
