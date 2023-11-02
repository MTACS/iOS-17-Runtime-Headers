
@interface _UIHyperInProcessPointAnimator : NSObject <NSCopying, NSSecureCoding, _UIHyperAnimator, _UIHyperAnimator_Internal> {
    UIViewVectorAnimatableProperty * __animatableProperty;
    unsigned long long  __dimensions;
    UISelectionFeedbackGenerator * __feedbackGenerator;
    bool  __generatesFeedbackWhenBoundaryIsCrossed;
    _UIHyperInteractor * __interactor;
    _UISpringParameters * __nonTrackingSpringParameters;
    bool  __regionChangedDiscontinuouslyOnChange;
    UIViewSpringAnimationBehavior * __springAnimationBehavior;
    _UISpringParameters * __trackingSpringParameters;
}

@property (nonatomic, readonly) UIViewVectorAnimatableProperty *_animatableProperty;
@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (setter=_setGeneratesFeedbackWhenBoundaryIsCrossed:, nonatomic) bool _generatesFeedbackWhenBoundaryIsCrossed;
@property (setter=_setInteractor:, nonatomic) _UIHyperInteractor *_interactor;
@property (setter=_setNonTrackingSpringParameters:, nonatomic, copy) _UISpringParameters *_nonTrackingSpringParameters;
@property (setter=_setRegionChangedDiscontinuouslyOnChange:, nonatomic) bool _regionChangedDiscontinuouslyOnChange;
@property (nonatomic, readonly) UIViewSpringAnimationBehavior *_springAnimationBehavior;
@property (setter=_setTrackingSpringParameters:, nonatomic, copy) _UISpringParameters *_trackingSpringParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_animatableProperty;
- (void)_animateWithParameters:(id)arg1 animations:(id /* block */)arg2;
- (void)_animateWithPrelude:(id /* block */)arg1 animations:(id /* block */)arg2;
- (unsigned long long)_dimensions;
- (id)_feedbackGenerator;
- (bool)_generatesFeedbackWhenBoundaryIsCrossed;
- (void)_interactionBegan;
- (void)_interactionChanged;
- (void)_interactionEndedMutatingState:(id /* block */)arg1;
- (id)_interactor;
- (id)_nonTrackingSpringParameters;
- (bool)_regionChangedDiscontinuouslyOnChange;
- (void)_setGeneratesFeedbackWhenBoundaryIsCrossed:(bool)arg1;
- (void)_setInteractor:(id)arg1;
- (void)_setNonTrackingSpringParameters:(id)arg1;
- (void)_setRegionChangedDiscontinuouslyOnChange:(bool)arg1;
- (void)_setTrackingSpringParameters:(id)arg1;
- (id)_springAnimationBehavior;
- (id)_trackingSpringParameters;
- (void)_updateAnimatablePropertyValuesToConstrainedPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
