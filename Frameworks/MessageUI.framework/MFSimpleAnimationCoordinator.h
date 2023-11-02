
@interface MFSimpleAnimationCoordinator : NSObject {
    bool  _animated;
    NSMutableArray * _animations;
    NSMutableArray * _completions;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, retain) NSMutableArray *animations;
@property (nonatomic, retain) NSMutableArray *completions;

- (void).cxx_destruct;
- (void)animateAlongsideAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)animations;
- (id)completions;
- (id)init;
- (id)initCoordinatorAnimated:(bool)arg1;
- (bool)isAnimated;
- (void)playAnimations;
- (void)playCompletions:(bool)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setAnimations:(id)arg1;
- (void)setCompletions:(id)arg1;

@end
