
@protocol DAEventsAttachmentDownloadConsumer <NSObject>

@required

- (void)downloadFinishedError:(NSError *)arg1;
- (void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;

@end
