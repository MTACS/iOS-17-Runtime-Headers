
@protocol PLClickPresentationInteractionPresentable <NSObject>

@required

- (<PLClickPresentationInteractionPresenting> *)presenter;
- (void)setPresenter:(id <PLClickPresentationInteractionPresenting>)arg1;

@optional

- (UIView *)viewForTouchContinuation;
- (UIView *)viewWithContent;

@end
