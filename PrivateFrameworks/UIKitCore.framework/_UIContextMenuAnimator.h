
@interface _UIContextMenuAnimator : NSObject <UIContextMenuInteractionCommitAnimating> {
    NSMutableArray * _animations;
    NSMutableArray * _completions;
    long long  _preferredCommitStyle;
    UIViewController * _previewViewController;
}

@property (nonatomic, readonly) NSMutableArray *animations;
@property (nonatomic, readonly) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAnyActions;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredCommitStyle;
@property (nonatomic, readonly) UIViewController *previewViewController;
@property (readonly) Class superclass;

+ (id)animatorWithViewController:(id)arg1;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animations;
- (id)completions;
- (bool)hasAnyActions;
- (void)performAllAnimations;
- (void)performAllCompletions;
- (long long)preferredCommitStyle;
- (id)previewViewController;
- (void)setPreferredCommitStyle:(long long)arg1;

@end
