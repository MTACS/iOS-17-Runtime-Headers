
@interface _UIBarCustomizerAnimator : NSObject <_UIBarCustomizerAnimating> {
    NSMutableArray * _animations;
    NSMutableArray * _completions;
}

@property (nonatomic, retain) NSMutableArray *animations;
@property (nonatomic, retain) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animations;
- (id)completions;
- (void)performAllAnimations;
- (void)performAllCompletionsWithSession:(id)arg1;
- (void)setAnimations:(id)arg1;
- (void)setCompletions:(id)arg1;

@end
