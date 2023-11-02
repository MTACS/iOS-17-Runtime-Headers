
@interface FigCameraViewfinderStream : NSObject {
    FigDelegateStorage * _delegateStorage;
    struct OpaqueFigVirtualDisplaySource { } * _displaySource;
    struct OpaqueFigEndpoint { } * _endpoint;
    id  _endpointsChangedNotificationToken;
    FigStateMachine * _stateMachine;
    struct OpaqueFigEndpointStream { } * _stream;
    id  _streamsChangedNotificationToken;
}

+ (void)initialize;

- (void)close;
- (void)dealloc;
- (int)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)init;
- (void)openWithDestination:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
