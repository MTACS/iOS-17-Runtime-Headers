
@interface UIEventFetcher : NSObject {
    id /* block */  _addToFilteredEventsBlock;
    double  _beginTimeForTouchEvents;
    struct __CFRunLoop { } * _cfRunLoop;
    double  _commitTimeForTouchEvents;
    NSMutableSet * _contextIDsNeedingHoverEventResend;
    long long  _countOfEventsReceivedInPreviousFrame;
    long long  _countOfEventsReceivedSinceLastDisplayLinkCallback;
    double  _deadlineTimeForTouchEvents;
    bool  _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    CADisplayLink * _displayLink;
    int  _displayLinkIdleTicks;
    double  _estimatedDisplayLinkDrift;
    <UIEventFetcherSink> * _eventFetcherSink;
    NSMutableArray * _eventFilters;
    id /* block */  _gameControllerEventFilterGenerator;
    NSMutableArray * _incomingHIDEventsFiltered;
    double  _lastFilteredEventTimestamp;
    double  _lastImportantEventTimestamp;
    double  _lastSignalEventTimestamp;
    unsigned long long  _lastSignalReason;
    double  _lastSignalTimestamp;
    long long  _lastSignalType;
    NSMutableDictionary * _latestHoverEventsByContextID;
    double  _latestMoveDragEventResendTimestamp;
    double  _latestMoveDragEventTimestamp;
    NSMutableDictionary * _latestMoveDragEventsBySessionID;
    bool  _needsSignalOnDisplayLink;
    id /* block */  _passiveObservationFilterGenerator;
    id /* block */  _receiveBlock;
    struct __CFRunLoopTimer { } * _resendDragEventsTimer;
    _UIHIDEventSynchronizer * _synchronizer;
    id /* block */  _watchSystemAppFilter;
}

- (void).cxx_destruct;
- (void)_receiveHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)displayLinkDidFire:(id)arg1;
- (id)init;
- (void)resendDragMoveEventsOnTimer:(struct __CFRunLoopTimer { }*)arg1 withInterval:(double)arg2;
- (void)threadMain;

@end
