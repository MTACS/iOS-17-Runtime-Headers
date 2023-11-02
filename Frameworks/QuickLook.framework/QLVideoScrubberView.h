
@interface QLVideoScrubberView : UIView <PHVideoScrubberViewInteractionDelegate> {
    PHVideoScrubberView * _photosScrubber;
    bool  _touchGestureIsActive;
    bool  _userInteractingWithScrubber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PHVideoScrubberView *photosScrubber;
@property (readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) bool touchGestureIsActive;
@property (getter=isUserInteractingWithScrubber) bool userInteractingWithScrubber;

- (void).cxx_destruct;
- (void)_updateUserInteractingWithScrubberIfNeeded;
- (void)didBeginTouchingVideoScrubberView:(id)arg1;
- (void)didEndTouchingVideoScrubberView:(id)arg1;
- (bool)isUserInteractingWithScrubber;
- (void)layoutSubviews;
- (id)photosScrubber;
- (id)scrollView;
- (void)setTouchGestureIsActive:(bool)arg1;
- (void)setUserInteractingWithScrubber:(bool)arg1;
- (bool)touchGestureIsActive;
- (void)videoScrubberView:(id)arg1 didEndDeceleratingInScrollView:(id)arg2;
- (void)videoScrubberView:(id)arg1 didEndDraggingInScrollView:(id)arg2;
- (void)videoScrubberView:(id)arg1 willBeginDeceleratingInScrollView:(id)arg2;
- (void)videoScrubberView:(id)arg1 willBeginDraggingInScrollView:(id)arg2;

@end
