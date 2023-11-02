
@interface UIInputViewAnimationStyle : NSObject <NSCopying> {
    bool  _dontMerge;
    bool  _forAssertion;
    bool  _isLegacy;
    NSMutableArray * _propertyAnimators;
    bool  animated;
    double  duration;
    unsigned long long  extraOptions;
    bool  force;
    bool  interactivelyCancelled;
}

@property (nonatomic) bool animated;
@property (nonatomic, readonly) bool canDismissWithScrollView;
@property (nonatomic, readonly) bool canTakeSnapshot;
@property (nonatomic) bool dontMerge;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long extraOptions;
@property (nonatomic) bool forAssertion;
@property (nonatomic) bool force;
@property (nonatomic) bool interactivelyCancelled;
@property (nonatomic, readonly) bool isAnimationCompleted;
@property (nonatomic, retain) NSMutableArray *propertyAnimators;

+ (id)animationStyleAnimated:(bool)arg1 duration:(double)arg2;
+ (id)animationStyleDefault;
+ (id)animationStyleImmediate;

- (void).cxx_destruct;
- (void)addAnimationToCurrentAnimations:(id /* block */)arg1;
- (bool)animated;
- (bool)canDismissWithScrollView;
- (bool)canTakeSnapshot;
- (void)cancelInterruptibleAnimations;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dontMerge;
- (double)duration;
- (id)endPlacementForInputViewSet:(id)arg1;
- (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;
- (unsigned long long)extraOptions;
- (bool)forAssertion;
- (bool)force;
- (bool)interactivelyCancelled;
- (bool)isAnimationCompleted;
- (bool)isEqual:(id)arg1;
- (void)launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (id)legacyAnimationCopy;
- (id)propertyAnimators;
- (void)removePropertyAnimators;
- (void)setAnimated:(bool)arg1;
- (void)setDontMerge:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setExtraOptions:(unsigned long long)arg1;
- (void)setForAssertion:(bool)arg1;
- (void)setForce:(bool)arg1;
- (void)setInteractivelyCancelled:(bool)arg1;
- (void)setPropertyAnimators:(id)arg1;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3;

@end
