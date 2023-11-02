
@interface ASVTurntableTwoFingerGesture : ASVTwoFingerGesture {
    <ASVTurntableTwoFingerGestureDelegate> * _turntableDelegate;
}

@property (nonatomic) <ASVTurntableTwoFingerGestureDelegate> *turntableDelegate;

- (void).cxx_destruct;
- (void)finishGesture;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 turntableDelegate:(id)arg4;
- (void)setTurntableDelegate:(id)arg1;
- (id)turntableDelegate;
- (void)updatePanWithFirstTouchLocationsecondTouchLocationmidPoint;

@end
