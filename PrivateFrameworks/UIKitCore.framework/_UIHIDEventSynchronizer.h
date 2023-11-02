
@interface _UIHIDEventSynchronizer : NSObject {
    id /* block */  _completionHandler;
    CADisplayLink * _displayLink;
    long long  _endingDeliveryPhase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPosition;
    int  _offsetToNextCoalescableEventIndex;
    id /* block */  _outputEventsHandler;
    _UIHIDPath * _outputPath;
    _UIHIDPathCollection * _outputPathCollection;
    _UIHIDPathSynchronizationFilter * _pathFilter;
    NSRunLoop * _runLoop;
    long long  _state;
    unsigned long long  _strategy;
    double  _timestampOfInitialInputEvent;
}

- (void).cxx_destruct;
- (void)_renderEvents:(id)arg1;
- (void)dealloc;

@end
