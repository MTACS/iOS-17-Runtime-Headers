
@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider> {
    double  _damping;
    double  _dampingRatio;
    bool  _implicitDuration;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _initialVelocity;
    double  _mass;
    double  _stiffness;
}

@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic) double damping;
@property (nonatomic, readonly) double dampingRatio;
@property (nonatomic) bool implicitDuration;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } initialVelocity;
@property (nonatomic) double mass;
@property (nonatomic, readonly) double settlingDuration;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property (nonatomic) double stiffness;
@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) double ts_settlingDuration;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_convertBounce:(double)arg1 toDampingRatio:(double*)arg2;
+ (void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double*)arg3 stiffness:(double*)arg4 damping:(double*)arg5;
+ (void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double*)arg4 response:(double*)arg5;
+ (bool)supportsSecureCoding;

- (id)_mediaTimingFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cubicTimingParameters;
- (double)damping;
- (double)dampingRatio;
- (id)description;
- (id)effectiveTimingFunction;
- (void)encodeWithCoder:(id)arg1;
- (bool)implicitDuration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDampingRatio:(double)arg1;
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector { double x1; double x2; })arg2;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(struct CGVector { double x1; double x2; })arg3;
- (id)initWithDuration:(double)arg1 bounce:(double)arg2;
- (id)initWithDuration:(double)arg1 bounce:(double)arg2 initialVelocity:(struct CGVector { double x1; double x2; })arg3;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector { double x1; double x2; })arg4;
- (id)initWithParameters:(id)arg1;
- (id)initWithParameters:(id)arg1 initialVelocity:(struct CGVector { double x1; double x2; })arg2;
- (id)initWithVelocity:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })initialVelocity;
- (bool)isEqual:(id)arg1;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setImplicitDuration:(bool)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (double)settlingDuration;
- (id)springTimingParameters;
- (double)stiffness;
- (long long)timingCurveType;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (double)ts_settlingDuration;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)vui_initWithDampingRatio:(double)arg1 frequencyResponse:(double)arg2;

@end
