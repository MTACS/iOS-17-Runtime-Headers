
@interface CACTouchEventObserver : NSObject {
    bool  _areTouchesDown;
    <CACTouchEventObserverDelegate> * _delegate;
    AXEventProcessor * _eventProcessor;
    AXMutableReplayableGesture * _gestureBeingRecorded;
    double  _startTimeForGestureBeingRecorded;
}

@property (nonatomic) <CACTouchEventObserverDelegate> *delegate;
@property (nonatomic, retain) AXMutableReplayableGesture *gestureBeingRecorded;
@property (nonatomic, readonly) bool isRecording;
@property (nonatomic) double startTimeForGestureBeingRecorded;

- (void).cxx_destruct;
- (void)_didReceiveEvent:(id)arg1;
- (bool)_isLiftEvent:(id)arg1;
- (bool)_isTouchEvent:(id)arg1;
- (void)_recordEvent:(id)arg1;
- (void)beginObserving;
- (id)delegate;
- (void)endObserving;
- (id)gestureBeingRecorded;
- (id)init;
- (bool)isRecording;
- (void)setDelegate:(id)arg1;
- (void)setGestureBeingRecorded:(id)arg1;
- (void)setStartTimeForGestureBeingRecorded:(double)arg1;
- (void)startRecordingGesture;
- (double)startTimeForGestureBeingRecorded;
- (id)stopRecordingGesture;

@end
