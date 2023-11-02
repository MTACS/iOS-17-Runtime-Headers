
@interface AVPlayerTaggedBufferOutput : NSObject {
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    struct OpaqueCMTaggedBufferGroup { } * _lastSeenTaggedBufferGroup;
    AVTaggedVideoOutputSpecification * _outputSpecification;
    AVPlayer * _playerWeakReference;
    id /* block */  _resourceLifeCycleHandler;
    NSObject<OS_dispatch_queue> * _stateQueue;
    struct OpaqueFigVideoReceiver { } * _videoReceiver;
    struct OpaqueFigVideoTarget { } * _videoTarget;
}

- (void).cxx_destruct;
- (bool)_attachToPlayer:(id)arg1;
- (int)_createAndConfigureVideoReceiverIfNecessaryOnStateQueue;
- (void)_detachFromPlayer:(id)arg1;
- (void)_setResourceLifeCycleHandler:(id /* block */)arg1;
- (bool)_setupWithTaggedOutputSpecification:(id)arg1 exceptionReasonOut:(id*)arg2;
- (struct OpaqueCMTaggedBufferGroup { }*)copyTaggedBufferGroupForHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (void)dealloc;
- (bool)hasNewTaggedBufferGroupForHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithSpecification:(id)arg1;
- (struct OpaqueCMTaggedBufferGroup { }*)lastSeenTaggedBufferGroup;
- (id /* block */)resourceLifeCycleHandler;
- (void)setLastSeenTaggedBufferGroup:(struct OpaqueCMTaggedBufferGroup { }*)arg1;

@end
