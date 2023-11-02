
@protocol CSAttSiriEndpointerNodeDelegate <NSObject>

@required

- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(CSEndpointerMetrics *)arg3 usesAutomaticEndPointing:(bool)arg4;
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didDetectStartpointAtTime:(double)arg2;

@optional

- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(CSEndpointerMetrics *)arg4 useEndpointerSignal:(bool)arg5;
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 registerEndpointerProxy:(CSEndpointerProxy *)arg2;

@end
