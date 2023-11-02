
@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController <PXVerticalSwipeGestureRecognizerHelperDelegate, UIGestureRecognizerDelegate> {
    PUChangeDirectionValueFilter * __dismissGestureDirectionValueFilter;
    UIPanGestureRecognizer * __panGestureRecognizer;
    PUSwipedDownTileTracker * __swipedDownTileTracker;
    bool  _handlingPanGestureRecognizer;
    PXVerticalSwipeGestureRecognizerHelper * _verticalSwipeGestureRecognizerHelper;
}

@property (setter=_setDismissGestureDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_dismissGestureDirectionValueFilter;
@property (setter=_setPanGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_panGestureRecognizer;
@property (setter=_setSwipedDownTileTracker:, nonatomic, retain) PUSwipedDownTileTracker *_swipedDownTileTracker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isHandlingPanGestureRecognizer, setter=_setHandlingPanGestureRecognizer:, nonatomic) bool handlingPanGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper;

- (void).cxx_destruct;
- (id)_dismissGestureDirectionValueFilter;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (bool)_isHandlingPanGestureRecognizer;
- (id)_panGestureRecognizer;
- (void)_setDismissGestureDirectionValueFilter:(id)arg1;
- (void)_setHandlingPanGestureRecognizer:(bool)arg1;
- (void)_setPanGestureRecognizer:(id)arg1;
- (void)_setSwipedDownTileTracker:(id)arg1;
- (id)_swipedDownTileTracker;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (id)verticalSwipeGestureRecognizerHelper;
- (bool)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;

@end
