
@interface ICDocCamScannedDocumentEditor : NSObject {
    ICAttachment * _galleryAttachment;
    NSUndoManager * _undoManager;
}

@property (nonatomic, retain) ICAttachment *galleryAttachment;
@property (nonatomic, readonly) ICAttachmentGalleryModel *galleryModel;
@property (nonatomic, retain) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)applyFilter:(short)arg1 forAttachmentAtIndex:(unsigned long long)arg2;
- (void)applyFilter:(short)arg1 forAttachmentWithIdentifier:(id)arg2;
- (void)deletePagesAtIndexes:(id)arg1;
- (id)galleryAttachment;
- (id)galleryModel;
- (unsigned long long)indexForAttachmentWithIdentifier:(id)arg1;
- (id)initWithGalleryAttachment:(id)arg1;
- (bool)moveObjectWithIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)movePageFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)saveAndUpdatePreview:(bool)arg1;
- (void)setGalleryAttachment:(id)arg1;
- (void)setMarkupData:(id)arg1 forAttachmentWithIdentifier:(id)arg2;
- (bool)setOrientation:(long long)arg1 forAttachment:(id)arg2;
- (void)setOrientation:(long long)arg1 forAttachmentAtIndex:(unsigned long long)arg2;
- (void)setQuad:(id)arg1 forAttachment:(id)arg2;
- (void)setQuad:(id)arg1 forAttachmentWithIdentifier:(id)arg2;
- (void)setUndoManager:(id)arg1;
- (id)subAttachmentWithIdentifier:(id)arg1;
- (void)undeleteSubAttachment:(id)arg1;
- (id)undoManager;
- (void)undoablyDeleteSubAttachments:(id)arg1 actionName:(id)arg2;
- (void)undoablyMoveAttachmentWithIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)undoablySetOrientation:(long long)arg1 forAttachmentIdentifier:(id)arg2;
- (void)undoablySetQuad:(id)arg1 forAttachment:(id)arg2;
- (void)undoablyUndeleteSubAttachments:(id)arg1 actionName:(id)arg2;
- (void)undoablyUpdateTitle:(id)arg1 forAttachmentWithIdentifier:(id)arg2 isUserDefined:(bool)arg3;
- (void)updateDocumentTitle:(id)arg1 isUserDefined:(bool)arg2;
- (bool)updateTitle:(id)arg1 forSubAttachment:(id)arg2;

@end
