
@interface PXGTransition : NSObject {
    bool  _animatingTowardsFinalState;
    bool  _animatingTowardsInitialState;
    NSSet * _animations;
    id /* block */  _completionBlock;
    float  _fractionCompleted;
    bool  _invalid;
    bool  _isIntercative;
    PXGLayout * _layout;
}

@property (nonatomic, readonly) bool animatingTowardsFinalState;
@property (nonatomic, readonly) bool animatingTowardsInitialState;
@property (nonatomic, readonly) NSSet *animations;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic) float fractionCompleted;
@property (nonatomic, readonly) bool invalid;
@property (nonatomic) bool isIntercative;
@property (nonatomic, readonly) PXGLayout *layout;

- (void).cxx_destruct;
- (void)animateToFinalStateWithCompletionBlock:(id /* block */)arg1;
- (void)animateToInitialStateWithCompletionBlock:(id /* block */)arg1;
- (bool)animatingTowardsFinalState;
- (bool)animatingTowardsInitialState;
- (id)animations;
- (id /* block */)completionBlock;
- (float)fractionCompleted;
- (id)initWithAnimations:(id)arg1 layout:(id)arg2;
- (bool)invalid;
- (void)invalidate;
- (bool)isIntercative;
- (id)layout;
- (void)setFractionCompleted:(float)arg1;
- (void)setIsIntercative:(bool)arg1;

@end
