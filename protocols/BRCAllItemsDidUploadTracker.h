
@protocol BRCAllItemsDidUploadTracker <NSObject>

@required

- (void)clientZone:(BRCClientZone *)arg1 didFinishUploadingAllItemsWithError:(NSError *)arg2;

@end
