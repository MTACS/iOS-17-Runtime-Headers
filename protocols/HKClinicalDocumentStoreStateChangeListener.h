
@protocol HKClinicalDocumentStoreStateChangeListener <NSObject>

@required

- (void)downloadableAttachmentDidChangeState:(HKMedicalDownloadableAttachment *)arg1;

@end
