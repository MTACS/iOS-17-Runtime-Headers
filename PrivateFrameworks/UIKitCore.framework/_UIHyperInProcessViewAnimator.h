
@interface _UIHyperInProcessViewAnimator : NSObject <NSCopying, NSSecureCoding, _UIHyperAnimator, _UIHyperAnimator_Internal> {
    unsigned long long  __dimensions;
    _UIHyperInteractor * __interactor;
    _UISpringParameters * __nonTrackingSpringParameters;
    <UIViewSpringAnimationBehaviorDescribing> * __overrideSpringAnimationBehavior;
    UIViewSpringAnimationBehavior * __springAnimationBehavior;
    _UISpringParameters * __trackingSpringParameters;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setInteractor:, nonatomic) _UIHyperInteractor *_interactor;
@property (setter=_setNonTrackingSpringParameters:, nonatomic, copy) _UISpringParameters *_nonTrackingSpringParameters;
@property (setter=_setOverrideSpringAnimationBehavior:, nonatomic, retain) <UIViewSpringAnimationBehaviorDescribing> *_overrideSpringAnimationBehavior;
@property (nonatomic, readonly) UIViewSpringAnimationBehavior *_springAnimationBehavior;
@property (setter=_setTrackingSpringParameters:, nonatomic, copy) _UISpringParameters *_trackingSpringParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_animateInteractive:(bool)arg1 animations:(id /* block */)arg2;
- (void)_animateWithParameters:(id)arg1 animations:(id /* block */)arg2;
- (unsigned long long)_dimensions;
- (void)_interactionBegan;
- (void)_interactionChanged;
- (void)_interactionEndedMutatingState:(id /* block */)arg1;
- (id)_interactor;
- (id)_nonTrackingSpringParameters;
- (id)_overrideSpringAnimationBehavior;
- (void)_setInteractor:(id)arg1;
- (void)_setNonTrackingSpringParameters:(id)arg1;
- (void)_setOverrideSpringAnimationBehavior:(id)arg1;
- (void)_setTrackingSpringParameters:(id)arg1;
- (id)_springAnimationBehavior;
- (id)_trackingSpringParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
