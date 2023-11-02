
@interface CKBalloonSwipeController : NSObject {
    UIViewPropertyAnimator * _balloonResetAnimator;
    CKBalloonView * _balloonView;
    CKTranscriptBalloonCell * _cell;
    double  _initialBalloonX;
    bool  _isGestureCommittedToAction;
    double  _offsetDelta;
    id /* block */  _onSwipeChanged;
    id /* block */  _onSwipeCompletion;
    CKSwipeActionIndicator * _replyIndicator;
}

@property (nonatomic, retain) UIViewPropertyAnimator *balloonResetAnimator;
@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic) CKTranscriptBalloonCell *cell;
@property (nonatomic) double initialBalloonX;
@property (nonatomic) bool isGestureCommittedToAction;
@property (nonatomic) double offsetDelta;
@property (nonatomic, copy) id /* block */ onSwipeChanged;
@property (nonatomic, copy) id /* block */ onSwipeCompletion;
@property (nonatomic, retain) CKSwipeActionIndicator *replyIndicator;

- (void).cxx_destruct;
- (void)_beginReplyWithSwipeVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)_doPulseAnimationWithHaptic:(bool)arg1;
- (void)_gestureBegan:(id)arg1 forCell:(id)arg2;
- (void)_gestureChanged:(id)arg1 forCell:(id)arg2;
- (void)_gestureFinished:(id)arg1 forCell:(id)arg2;
- (void)_playHaptic;
- (void)_resetPropertyAnimatorsIfNeeded;
- (void)_swipeValueChanged:(double)arg1;
- (id)balloonResetAnimator;
- (id)balloonView;
- (id)cell;
- (id)initWithBalloonView:(id)arg1 forCell:(id)arg2 swipeCompletionHandler:(id /* block */)arg3 swipeChangedHandler:(id /* block */)arg4;
- (double)initialBalloonX;
- (double)initialIndicatorX;
- (bool)isGestureCommittedToAction;
- (double)offsetDelta;
- (id /* block */)onSwipeChanged;
- (id /* block */)onSwipeCompletion;
- (void)prepareForReuse;
- (id)replyIndicator;
- (void)setBalloonResetAnimator:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setInitialBalloonX:(double)arg1;
- (void)setIsGestureCommittedToAction:(bool)arg1;
- (void)setOffsetDelta:(double)arg1;
- (void)setOnSwipeChanged:(id /* block */)arg1;
- (void)setOnSwipeCompletion:(id /* block */)arg1;
- (void)setReplyIndicator:(id)arg1;
- (void)swipeToReplyGestureHandler:(id)arg1;

@end
