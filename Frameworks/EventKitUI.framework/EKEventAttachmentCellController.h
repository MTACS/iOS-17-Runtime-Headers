
@interface EKEventAttachmentCellController : NSObject <QLPreviewControllerDelegate> {
    EKAttachment * _attachment;
    EKEventAttachmentCell * _cell;
    <EKEventAttachmentCellControllerDelegate> * _delegate;
    id  _downloadID;
    bool  _sourceIsManaged;
}

@property (nonatomic, retain) EKAttachment *attachment;
@property (readonly) EKEventAttachmentCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventAttachmentCellControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attachmentDownloadErrorLocalizedString;
+ (bool)_attachmentIsViewable:(id)arg1;
+ (id)_cannotOpenAttachmentLocalizedString;
+ (id)_keyForAttachment:(id)arg1;
+ (id)_okLocalizedString;
+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 sourceIsManaged:(bool)arg3;

- (void).cxx_destruct;
- (void)_clearDownloadID;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)_openExternalAttachmentURLInBrowser:(id)arg1;
- (void)_presentPreviewAttachmentInPreviewWithInfo:(id)arg1;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (id)attachment;
- (id)attachmentFilename;
- (id)cell;
- (void)cellSelected;
- (id)delegate;
- (id)event;
- (id)initWithAttachment:(id)arg1 sourceIsManaged:(bool)arg2;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)promptToDownloadAttachment;
- (void)setAttachment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startAttachmentDownload;
- (unsigned long long)supportedInterfaceOrientationMaskForInterfaceOrientation:(long long)arg1;
- (void)tearDown;

@end
