
@interface EKEventCreationGestureController : NSObject <UIGestureRecognizerDelegate> {
    UIView * _containerView;
    EKDayOccurrenceView * _eventPreview;
    NSObject<EKEventCreationGestureControllerDelegate> * _gestureDelegate;
    UILongPressGestureRecognizer * _gestureRecognizer;
    EKEvent * _newEvent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originPoint;
    int  _state;
    UIView * _targetView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustPreviewFrame;
- (void)_cleanUp;
- (void)_gestureBegan;
- (void)_gestureCanceled;
- (void)_gestureChangedEnoughToCreateEvent;
- (void)_gestureCompleted;
- (void)_gestureUpdated;
- (id)_snapDateTo15MinuteInterval:(id)arg1;
- (bool)currentlyCreatingEvent;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGesture:(id)arg1;
- (id)initWithView:(id)arg1 delegate:(id)arg2;
- (void)invalidate;

@end
