
@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <QLPreviewControllerDelegate> {
    NSArray * _attachments;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
}

@property (nonatomic, retain) NSArray *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_populateAttachmentData;
- (id)_previewItem;
- (id)attachmentClass;
- (id)attachments;
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)modelObjectAtIndex:(unsigned long long)arg1;
- (id)navigationBarTitle;
- (unsigned long long)numberOfModelObjects;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)privateWorkQueue;
- (void)reloadModelData;
- (void)setAttachments:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;

@end
