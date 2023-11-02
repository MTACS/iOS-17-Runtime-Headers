
@protocol RMConnectionDataDelegate <NSObject>

@required

- (void)endpoint:(void *)arg1 didReceiveMessage:(void *)arg2 withData:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 10: RMConnectionEndpoint *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, void*

@end
