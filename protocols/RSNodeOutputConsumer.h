
@protocol RSNodeOutputConsumer <NSObject>

@required

- (void)consumeMessage:(RSNodeMessage *)arg1 fromOutput:(RSNodeOutput *)arg2;

@end
