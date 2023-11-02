
@protocol IPStateUpdateStreamSource <NSObject>

@required

- (<IPStateUpdateStreamSourceDelegate> *)delegate;
- (void)resume;
- (void)setDelegate:(id <IPStateUpdateStreamSourceDelegate>)arg1;

@end
