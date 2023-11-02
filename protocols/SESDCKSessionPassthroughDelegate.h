
@protocol SESDCKSessionPassthroughDelegate <NSObject>

@required

- (void)sesSession:(SESDCKSession *)arg1 didReceivePassthroughMessage:(NSData *)arg2;

@end
