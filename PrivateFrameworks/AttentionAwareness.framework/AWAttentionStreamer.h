
@interface AWAttentionStreamer : NSObject {
    <StreamingOperation> * _faceDetectStreamer;
    NSObject<OS_dispatch_queue> * _queue;
    AWSampleLogger * _sampleLogger;
    bool  _unitTestMode;
}

- (void).cxx_destruct;
- (id)cancelEventStreamWithMask:(unsigned long long)arg1;
- (struct { bool x1; bool x2; })getStreamerOptionsWithMask:(unsigned long long)arg1;
- (id)initForUnitTest:(bool)arg1 useAVFoundation:(bool)arg2;
- (id)initWithOptions:(id)arg1;
- (bool)isStreamerRunningWithMask:(unsigned long long)arg1;
- (void)logStreamComplete:(unsigned long long)arg1 identifier:(id)arg2 duration:(unsigned long long)arg3 ERActivated:(bool)arg4;
- (void)setNotificationHandler:(id /* block */)arg1 withMask:(unsigned long long)arg2;
- (void)setSmartCoverStateWithMask:(unsigned long long)arg1 smartCoverState:(bool)arg2;
- (id)streamEventsWithMask:(unsigned long long)arg1 block:(id /* block */)arg2 options:(struct { bool x1; bool x2; })arg3;

@end
