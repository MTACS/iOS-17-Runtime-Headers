
@protocol AVTRecordingCarouselController <AVTCarouselController>

@required

- (AVTRecordView *)focusedRecordingView;
- (<AVTRecordingCarouselControllerDelegate> *)recordingDelegate;
- (void)setRecordingDelegate:(id <AVTRecordingCarouselControllerDelegate>)arg1;

@end
