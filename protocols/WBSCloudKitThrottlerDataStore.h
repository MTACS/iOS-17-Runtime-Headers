
@protocol WBSCloudKitThrottlerDataStore <NSObject>

@required

- (NSData *)recordOfPastOperationsForThrottler:(WBSCloudKitThrottler *)arg1;
- (void)setRecordOfPastOperations:(NSData *)arg1 forThrottler:(WBSCloudKitThrottler *)arg2;

@end
