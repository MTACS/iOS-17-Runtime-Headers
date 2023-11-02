
@interface _UIHyperOutOfProcessViewAnimator : NSObject <NSCopying, NSSecureCoding, _UIHyperAnimator, _UIHyperAnimator_Internal> {
    _UISpringParameters * __boundaryCrossedSpringParameters;
    <_UIHyperOutOfProcessViewAnimatorDelegate> * __delegate;
    unsigned long long  __dimensions;
    _UISpringParameters * __interactionEndedSpringParameters;
    _UIHyperInteractor * __interactor;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  __preferredFrameRateRange;
    NSMutableSet * __propertyAnimators;
    unsigned int  __updateReason;
}

@property (getter=_isAnimating, nonatomic, readonly) bool _animating;
@property (setter=_setBoundaryCrossedSpringParameters:, nonatomic, copy) _UISpringParameters *_boundaryCrossedSpringParameters;
@property (setter=_setDelegate:, nonatomic) <_UIHyperOutOfProcessViewAnimatorDelegate> *_delegate;
@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setInteractionEndedSpringParameters:, nonatomic, copy) _UISpringParameters *_interactionEndedSpringParameters;
@property (setter=_setInteractor:, nonatomic) _UIHyperInteractor *_interactor;
@property (setter=_setPreferredFrameRateRange:, nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } _preferredFrameRateRange;
@property (nonatomic, readonly) NSMutableSet *_propertyAnimators;
@property (setter=_setUpdateReason:, nonatomic) unsigned int _updateReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_animateWithParameters:(id)arg1 animations:(id /* block */)arg2;
- (void)_animateWithParameters:(id)arg1 velocity:(double)arg2 animations:(id /* block */)arg3;
- (id)_boundaryCrossedSpringParameters;
- (id)_delegate;
- (unsigned long long)_dimensions;
- (void)_interactionBegan;
- (void)_interactionChanged;
- (void)_interactionEndedMutatingState:(id /* block */)arg1;
- (id)_interactionEndedSpringParameters;
- (id)_interactor;
- (bool)_isAnimating;
- (struct CAFrameRateRange { float x1; float x2; float x3; })_preferredFrameRateRange;
- (id)_propertyAnimators;
- (void)_setBoundaryCrossedSpringParameters:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_setInteractionEndedSpringParameters:(id)arg1;
- (void)_setInteractor:(id)arg1;
- (void)_setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)_setUpdateReason:(unsigned int)arg1;
- (unsigned int)_updateReason;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
