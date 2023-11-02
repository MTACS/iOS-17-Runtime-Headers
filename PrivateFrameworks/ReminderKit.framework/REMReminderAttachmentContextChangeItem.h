
@interface REMReminderAttachmentContextChangeItem : NSObject {
    NSMutableArray * _mutableAttachments;
    REMReminderChangeItem * _reminderChangeItem;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *fileAttachments;
@property (nonatomic, readonly) NSArray *imageAttachments;
@property (nonatomic, retain) NSMutableArray *mutableAttachments;
@property (nonatomic, retain) REMReminderChangeItem *reminderChangeItem;
@property (nonatomic, readonly) NSArray *urlAttachments;

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1;
- (id)addFileAttachmentWithData:(id)arg1 uti:(id)arg2;
- (id)addFileAttachmentWithURL:(id)arg1 error:(id*)arg2;
- (id)addImageAttachmentWithData:(id)arg1 uti:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)addImageAttachmentWithURL:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id*)arg4;
- (id)addURLAttachmentWithURL:(id)arg1;
- (id)attachments;
- (id)attachmentsOfClass:(Class)arg1;
- (id)fileAttachments;
- (id)imageAttachments;
- (id)initWithReminderChangeItem:(id)arg1;
- (void)insertAttachment:(id)arg1 afterAttachment:(id)arg2;
- (void)insertAttachment:(id)arg1 beforeAttachment:(id)arg2;
- (id)mutableAttachments;
- (id)newObjectIDForFileAttachment;
- (id)newObjectIDForImageAttachment;
- (id)newObjectIDForURLAttachment;
- (id)reminderChangeItem;
- (void)removeAllAttachments;
- (void)removeAllAttachmentsWithClass:(Class)arg1;
- (void)removeAttachment:(id)arg1;
- (void)removeURLAttachments;
- (void)setMutableAttachments:(id)arg1;
- (void)setReminderChangeItem:(id)arg1;
- (id)setURLAttachmentWithURL:(id)arg1;
- (id)urlAttachments;

@end
