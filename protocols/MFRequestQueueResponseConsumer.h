
@protocol MFRequestQueueResponseConsumer <NSObject>

@required

- (void)handleResponse:(id)arg1 error:(MFError *)arg2;

@end
