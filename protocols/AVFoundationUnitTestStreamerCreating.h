
@protocol AVFoundationUnitTestStreamerCreating

@required

- (bool)cancelUnitTestStream;
- (void)setAVFoundationDelegate:(id <AVFoundationUnitTestEventReceiving>)arg1;
- (void)setErrorState:(bool)arg1;
- (bool)startUnitTestStream:(NSObject<OS_dispatch_queue> *)arg1 options:(struct { bool x1; bool x2; })arg2;

@end
