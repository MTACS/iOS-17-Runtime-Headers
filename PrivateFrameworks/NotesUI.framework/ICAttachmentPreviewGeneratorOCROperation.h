
@interface ICAttachmentPreviewGeneratorOCROperation : ICAttachmentPreviewGeneratorOperation {
    ICAttachmentModel * _attachmentModel;
    NSManagedObjectContext * _managedObjectContext;
}

@property (retain) ICAttachmentModel *attachmentModel;
@property (retain) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (id)attachmentModel;
- (void)main;
- (id)managedObjectContext;
- (void)setAttachmentModel:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (unsigned long long)type;

@end
