
@interface BSAnimationSettings : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _isSpring;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _lock_damping;
    double  _lock_delay;
    double  _lock_epsilon;
    double  _lock_frameInterval;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _lock_frameRange;
    unsigned int  _lock_highFrameRateReason;
    double  _lock_initialVelocity;
    double  _lock_mass;
    float  _lock_speed;
    double  _lock_stiffness;
    double  _lock_storedDuration;
    bool  _lock_storedDurationIsDirty;
    CAMediaTimingFunction * _lock_timingFunction;
    bool  _mutable;
}

@property (nonatomic, readonly) double damping;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double frameInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int highFrameRateReason;
@property (nonatomic, readonly) double initialVelocity;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic, readonly) float speed;
@property (nonatomic, readonly) double stiffness;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToCAAnimation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (double)delay;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (double)epsilon;
- (double)frameInterval;
- (unsigned long long)hash;
- (unsigned int)highFrameRateReason;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (double)initialVelocity;
- (bool)isEqual:(id)arg1;
- (bool)isSpringAnimation;
- (double)mass;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (double)progressAtTime:(double)arg1;
- (float)speed;
- (double)stiffness;
- (id)timingFunction;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)tryAnimatingWithSettings:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)tryAnimatingWithSettings:(id)arg1 fromCurrentState:(bool)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
