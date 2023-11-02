
@interface AVContentOverlayView : AVTouchIgnoringView {
    <AVContentOverlayViewDelegate> * _delegate;
}

@property (nonatomic) <AVContentOverlayViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didRemoveSubview:(id)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
