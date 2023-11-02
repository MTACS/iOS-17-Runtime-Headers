
@interface ASVWorldSingleFingerGesture : ASVSingleFingerGesture {
    ASVWorldGestureDragOffsetCorrector * _dragOffsetCorrector;
    <ASVWorldSingleFingerGestureDelegate> * _worldDelegate;
}

@property (nonatomic, retain) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector;
@property (nonatomic) <ASVWorldSingleFingerGestureDelegate> *worldDelegate;

- (void).cxx_destruct;
- (id)dragOffsetCorrector;
- (void)finishGesture;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 worldDelegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;
- (float)potentialAssetDistanceFromInitialLocationOnScreen;
- (void)setDragOffsetCorrector:(id)arg1;
- (void)setWorldDelegate:(id)arg1;
- (void)updateGesture;
- (void)updateTranslation;
- (id)worldDelegate;

@end
