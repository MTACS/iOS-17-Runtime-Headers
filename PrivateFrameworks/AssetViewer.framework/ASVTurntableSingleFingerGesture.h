
@interface ASVTurntableSingleFingerGesture : ASVSingleFingerGesture {
    <ASVTurntableSingleFingerGestureDelegate> * _turntableDelegate;
}

@property (nonatomic) <ASVTurntableSingleFingerGestureDelegate> *turntableDelegate;

- (void).cxx_destruct;
- (void)finishGesture;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 turntableDelegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;
- (void)setTurntableDelegate:(id)arg1;
- (id)turntableDelegate;
- (void)updateGesture;
- (void)updatePan;

@end
