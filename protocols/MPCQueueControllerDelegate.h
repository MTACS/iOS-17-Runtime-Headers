
@protocol MPCQueueControllerDelegate <NSObject>

@required

- (void)queueController:(MPCQueueController *)arg1 didChangeTargetContentItemID:(NSString *)arg2;
- (void)queueController:(MPCQueueController *)arg1 didDetectMismatchForActiveContentItemID:(NSString *)arg2 targetContentItemID:(NSString *)arg3;
- (void)queueController:(MPCQueueController *)arg1 didIncrementVersionForSegment:(NSString *)arg2;
- (void)queueControllerDidChangeContents:(MPCQueueController *)arg1;
- (void)queueControllerDidReachUnexpectedEndOfQueue:(MPCQueueController *)arg1;

@end
