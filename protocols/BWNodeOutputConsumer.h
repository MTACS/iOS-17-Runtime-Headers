
@protocol BWNodeOutputConsumer <NSObject>

@required

- (void)consumeMessage:(BWNodeMessage *)arg1 fromOutput:(BWNodeOutput *)arg2;

@end
