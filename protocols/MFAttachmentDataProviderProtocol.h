
@protocol MFAttachmentDataProviderProtocol <NSObject>

@required

- (void)fetchDataForAttachment:(void *)arg1 consumer:(void *)arg2 progress:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: MFAttachment *, <MFDataConsumer> *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, bool, void*
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;
- (NSString *)storageLocationForAttachment:(MFAttachment *)arg1 withMessage:(MFMailMessage *)arg2;

@end
