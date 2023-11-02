
@interface BlastDoorFileTransferAttribute : NSObject {
    void attachmentSubtype;
    void attachments;
    void datasize;
    void imageInfo;
    void legacyAnimoji;
    void mimeType;
    void name;
    void utiType;
}

@property (nonatomic, retain) BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *attachmentSubtype;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic) unsigned long long datasize;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) BlastDoorFileTransferAttribute_ImageInfo *imageInfo;
@property (nonatomic, retain) NSNumber *legacyAnimoji;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *utiType;

- (void).cxx_destruct;
- (id)attachmentSubtype;
- (id)attachments;
- (unsigned long long)datasize;
- (id)description;
- (id)imageInfo;
- (id)init;
- (id)legacyAnimoji;
- (id)mimeType;
- (id)name;
- (void)setAttachmentSubtype:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setDatasize:(unsigned long long)arg1;
- (void)setImageInfo:(id)arg1;
- (void)setLegacyAnimoji:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUtiType:(id)arg1;
- (id)utiType;

@end
