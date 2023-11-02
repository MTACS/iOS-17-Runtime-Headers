
@protocol LNConnectionDelegate <NSObject>

@required

- (void)connection:(LNConnection *)arg1 didCloseWithError:(NSError *)arg2;

@end
