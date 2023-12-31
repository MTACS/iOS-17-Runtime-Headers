
@protocol PARSessionDelegate <NSObject>

@required

- (void)session:(PARSession *)arg1 bag:(PARBag *)arg2 didLoadWithError:(NSError *)arg3;

@optional

- (void)session:(PARSession *)arg1 didDeleteResource:(NSString *)arg2;
- (void)session:(PARSession *)arg1 didDownloadResource:(NSString *)arg2;

@end
