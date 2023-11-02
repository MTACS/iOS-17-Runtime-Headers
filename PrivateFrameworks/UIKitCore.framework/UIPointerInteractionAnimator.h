
@interface UIPointerInteractionAnimator : NSObject <UIPointerInteractionAnimating> {
    NSMutableArray * _animations;
    NSMutableArray * _completions;
    NSString * _debugName;
}

@property (nonatomic, retain) NSMutableArray *animations;
@property (nonatomic, retain) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animations;
- (id)completions;
- (id)debugName;
- (void)performAllAnimations;
- (void)performAllCompletions:(bool)arg1;
- (void)setAnimations:(id)arg1;
- (void)setCompletions:(id)arg1;
- (void)setDebugName:(id)arg1;

@end
