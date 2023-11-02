
@interface PUSwipedDownTileTracker : PUInteractiveTileTracker {
    PHSwipeDownTracker * __swipeDownTracker;
    PUTileLayoutInfo * __trackedTileLayoutInfo;
    PUTileController * _designatedTileController;
    UIPanGestureRecognizer * _panGestureRecognizer;
}

@property (setter=_setSwipeDownTracker:, nonatomic, retain) PHSwipeDownTracker *_swipeDownTracker;
@property (setter=_setTrackedTileLayoutInfo:, nonatomic, retain) PUTileLayoutInfo *_trackedTileLayoutInfo;
@property (nonatomic, retain) PUTileController *designatedTileController;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;

- (void).cxx_destruct;
- (void)_setSwipeDownTracker:(id)arg1;
- (void)_setTrackedTileLayoutInfo:(id)arg1;
- (id)_swipeDownTracker;
- (id)_trackedTileLayoutInfo;
- (void)completeTracking;
- (id)designatedTileController;
- (id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2;
- (id)initWithTilingView:(id)arg1;
- (id)panGestureRecognizer;
- (void)setDesignatedTileController:(id)arg1;
- (void)startTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateGestureRecognizerTracking;
- (void)updateTileControllerTracking;

@end
