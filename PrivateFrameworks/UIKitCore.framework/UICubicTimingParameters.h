
@interface UICubicTimingParameters : NSObject <UITimingCurveProvider> {
    long long  _animationCurve;
    UISpringTimingParameters * _springTimingParameters;
    long long  _timingCurveType;
    _UIViewCubicTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) long long animationCurve;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint1;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint2;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, retain) UISpringTimingParameters *springTimingParameters;
@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) _UIViewCubicTimingFunction *timingFunction;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_mediaTimingFunction;
- (void)_setAnimationCurve:(long long)arg1;
- (long long)animationCurve;
- (struct CGPoint { double x1; double x2; })controlPoint1;
- (struct CGPoint { double x1; double x2; })controlPoint2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cubicTimingParameters;
- (id)description;
- (id)effectiveTimingFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAnimationCurve:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint { double x1; double x2; })arg1 controlPoint2:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithCustomCurve:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSpringTimingParameters:(id)arg1;
- (id)springTimingParameters;
- (long long)timingCurveType;
- (id)timingFunction;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

+ (id)jet_appleServicesLoadingParameters;

@end
