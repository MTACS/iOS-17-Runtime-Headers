
@interface CNSharedProfileAnimationGenerator : NSObject

+ (id)log;

- (void)applyBlurFilterToLayer:(id)arg1 inputRadius:(double)arg2;
- (id)coinFlipSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (id)peekABooFinalSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (id)peekABooIntermediateSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 contact:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toAvatarImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toContact:(id)arg2 rightToLeft:(bool)arg3 avatarSize:(struct CGSize { double x1; double x2; })arg4 completionHandler:(id /* block */)arg5;
- (void)performPeekABooAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 contact:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)springAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3 stiffness:(double)arg4 damping:(double)arg5 mass:(double)arg6;

@end
