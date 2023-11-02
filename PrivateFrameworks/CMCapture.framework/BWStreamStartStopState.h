
@interface BWStreamStartStopState : NSObject {
    BWStreamStartStopState * _blockingMasterState;
    NSArray * _blockingSlaveStates;
    NSObject<OS_dispatch_group> * _dependentsHaveStoppedGroup;
    bool  _hasEnteredStartedGroup;
    NSObject<OS_dispatch_group> * _hasStartedGroup;
    int  _state;
    BWFigVideoCaptureStream * _stream;
    float  _timeoutInSeconds;
    bool  _waitForMasterAEToSettle;
}

- (void)dealloc;
- (id)description;

@end
