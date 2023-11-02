
@protocol NFDigitalCarKeySessionPassthroughDelegate <NSObject>

@required

- (void)session:(NFDigitalCarKeySession *)arg1 didReceivePassthroughMessage:(NSData *)arg2;

@end
