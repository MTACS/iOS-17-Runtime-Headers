
@interface ASVWorldTwoFingerGesture : ASVTwoFingerGesture {
    ASVWorldGestureDragOffsetCorrector * _dragOffsetCorrector;
    <ASVWorldTwoFingerGestureDelegate> * _worldDelegate;
}

@property (nonatomic, retain) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector;
@property (nonatomic) <ASVWorldTwoFingerGestureDelegate> *worldDelegate;

- (void).cxx_destruct;
- (id)dragOffsetCorrector;
- (void)finishGesture;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 worldDelegate:(id)arg4;
- (void)setDragOffsetCorrector:(id)arg1;
- (void)setWorldDelegate:(id)arg1;
- (void)updatePanWithFirstTouchLocationsecondTouchLocationmidPoint;
- (id)worldDelegate;

@end
