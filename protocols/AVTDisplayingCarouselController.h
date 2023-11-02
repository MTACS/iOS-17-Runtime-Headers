
@protocol AVTDisplayingCarouselController <AVTCarouselController>

@required

- (<AVTDisplayingCarouselControllerDelegate> *)displayingDelegate;
- (AVTView *)focusedDisplayView;
- (void)setDisplayingDelegate:(id <AVTDisplayingCarouselControllerDelegate>)arg1;

@end
