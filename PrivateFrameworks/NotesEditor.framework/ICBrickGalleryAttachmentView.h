
@interface ICBrickGalleryAttachmentView : ICBrickTextAttachmentView <ICGalleryAttachmentEditorControllerDelegate> {
    ICGalleryAttachmentEditorController * _galleryEditorController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICGalleryAttachmentEditorController *galleryEditorController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didChangeAttachmentTitle;
- (void)didChangeMergeableData;
- (void)didTapAttachment:(id)arg1;
- (void)galleryAttachmentEditorControllerDeleteAttachment;
- (void)galleryAttachmentEditorControllerDidDismiss;
- (id)galleryEditorController;
- (void)openAttachment;
- (void)setGalleryEditorController:(id)arg1;

@end
