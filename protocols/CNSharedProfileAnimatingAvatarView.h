
@protocol CNSharedProfileAnimatingAvatarView <NSObject>

@required

- (UIImageView *)destinationAvatarImageView;
- (void)performTransitionAnimationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)performTransitionAnimationWithStartHandler:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, id /* block */, void*, void, id /* block */, unsigned long long, void*
- (void)setSharedProfileStateOracle:(CNSharedProfileStateOracle *)arg1;
- (CNSharedProfileStateOracle *)sharedProfileStateOracle;
- (CALayer *)sourceAvatarLayer;

@end
