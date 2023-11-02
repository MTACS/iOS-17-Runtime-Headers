
@protocol IPStateUpdateStream <NSObject>

@required

- (<IPStateUpdateStreamSink> *)sink;
- (<IPStateUpdateStreamSource> *)source;

@end
