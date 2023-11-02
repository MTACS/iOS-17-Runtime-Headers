
@protocol BRCDownloadTracking <NSObject>

@required

- (void)downloadTrackedForFileObjectID:(BRFileObjectID *)arg1 withEtagIfLoser:(NSString *)arg2 didFinishWithError:(NSError *)arg3;

@end
