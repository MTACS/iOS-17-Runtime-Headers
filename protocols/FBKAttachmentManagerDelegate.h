
@protocol FBKAttachmentManagerDelegate <NSObject>

@required

- (void)attachmentManager:(FBKAttachmentManager *)arg1 didAddAttachment:(FBKAttachment *)arg2 atIndex:(long long)arg3;
- (void)attachmentManager:(FBKAttachmentManager *)arg1 didFinishAttaching:(FBKAttachment *)arg2 error:(NSError *)arg3;
- (void)attachmentManager:(FBKAttachmentManager *)arg1 didRemoveAttachment:(FBKAttachment *)arg2 atIndex:(long long)arg3;
- (void)attachmentManager:(FBKAttachmentManager *)arg1 didStartAttaching:(FBKAttachment *)arg2;
- (void)attachmentManager:(FBKAttachmentManager *)arg1 didStartBugSessionsForDevice:(FBKGroupedDevice *)arg2 success:(bool)arg3;
- (void)attachmentManager:(FBKAttachmentManager *)arg1 didUpdateAttachment:(FBKAttachment *)arg2 atIndex:(long long)arg3;

@end
