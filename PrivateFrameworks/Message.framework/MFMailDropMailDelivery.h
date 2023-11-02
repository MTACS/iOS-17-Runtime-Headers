
@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery {
    NSArray * _attachments;
    EMMailDropMetadata * _imageArchiveMetadata;
    long long  _mailDropState;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) EMMailDropMetadata *imageArchiveMetadata;
@property (nonatomic) long long mailDropState;

+ (id)_mailDropZone;

- (void).cxx_destruct;
- (id)_attachmentManager;
- (long long)_processAttachments;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6;
- (id)attachments;
- (id)ckDatabase;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)arg1;
- (id)imageArchiveMetadata;
- (long long)mailDropState;
- (id)publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(bool)arg5;
- (id)scaledImages:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setImageArchiveMetadata:(id)arg1;
- (void)setMailDropState:(long long)arg1;
- (bool)updateMessageWithAttachmentsSynchronously;

@end
