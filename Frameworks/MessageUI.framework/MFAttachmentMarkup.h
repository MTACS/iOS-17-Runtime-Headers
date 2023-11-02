
@interface MFAttachmentMarkup : NSObject {
    NSData * _attachmentData;
    NSString * _contentID;
    NSString * _contextID;
    NSString * _filename;
    NSString * _mimeType;
}

@property (nonatomic, retain) NSData *attachmentData;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *contextID;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSString *mimeType;

+ (id)attachmentMarkupWithProperties:(id)arg1 contentID:(id)arg2 mimeType:(id)arg3 filename:(id)arg4 contextID:(id)arg5;

- (void).cxx_destruct;
- (id)attachmentData;
- (id)contentID;
- (id)contextID;
- (id)filename;
- (id)mimeType;
- (void)setAttachmentData:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setMimeType:(id)arg1;

@end
