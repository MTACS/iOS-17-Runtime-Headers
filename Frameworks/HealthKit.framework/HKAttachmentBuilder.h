
@interface HKAttachmentBuilder : NSObject {
    NSDictionary * _attachmentMetadata;
    HKAttachmentStore * _attachmentStore;
    UTType * _contentType;
    NSURL * _fileURL;
    NSString * _name;
    NSString * _objectIdentifier;
    NSDictionary * _referenceMetadata;
    NSString * _schemaIdentifier;
}

@property (nonatomic, copy) NSDictionary *attachmentMetadata;
@property (nonatomic, copy) UTType *contentType;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *objectIdentifier;
@property (nonatomic, copy) NSDictionary *referenceMetadata;
@property (nonatomic, copy) NSString *schemaIdentifier;

- (void).cxx_destruct;
- (id)attachmentMetadata;
- (id)contentType;
- (id)fileURL;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)initWithAttachmentStore:(id)arg1;
- (id)name;
- (id)objectIdentifier;
- (id)referenceMetadata;
- (id)schemaIdentifier;
- (void)setAttachmentMetadata:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectIdentifier:(id)arg1;
- (void)setReferenceMetadata:(id)arg1;
- (void)setSchemaIdentifier:(id)arg1;

@end
