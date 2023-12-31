
@interface MFFileAttachment : NSObject {
    NSURL * _attachmentContentIDURL;
    NSString * _attachmentName;
    int  _attachmentType;
}

@property (nonatomic, retain) NSURL *attachmentContentIDURL;
@property (nonatomic, copy) NSString *attachmentName;
@property (nonatomic) int attachmentType;

- (void).cxx_destruct;
- (id)attachmentContentIDURL;
- (id)attachmentName;
- (int)attachmentType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAttachmentContentIDURL:(id)arg1;
- (void)setAttachmentName:(id)arg1;
- (void)setAttachmentType:(int)arg1;

@end
