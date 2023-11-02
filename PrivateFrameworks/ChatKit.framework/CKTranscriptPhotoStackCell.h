
@interface CKTranscriptPhotoStackCell : CKTranscriptBalloonCell {
    <CKTranscriptPhotoStackCellDelegate> * _delegate;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
}

@property (nonatomic) <CKTranscriptPhotoStackCellDelegate> *delegate;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;

- (void).cxx_destruct;
- (bool)allowsSwipeToReply;
- (id)delegate;
- (void)handlePinchGesture:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (id)photoStackBalloonView;
- (id)pinchGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;

@end
