
@protocol HKAttachmentStoreClientInterface <NSObject>

@required

- (void)clientRemote_streamDataForAttachment:(HKAttachment *)arg1 dataChunk:(NSData *)arg2 error:(NSError *)arg3 done:(bool)arg4;

@end
