
@interface ICAttachmentGalleryModel : ICAttachmentModel {
    ICTTOrderedSetVersionedDocument * _attachmentIdentifiersOrderedSetDocument;
}

@property (nonatomic, readonly) ICCROrderedSet *attachmentIdentifiersOrderedSet;
@property (nonatomic, retain) ICTTOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;
@property (nonatomic, readonly) unsigned long long subAttachmentCount;
@property (nonatomic, readonly, copy) NSArray *subAttachmentIdentifiers;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addSubAttachment:(id)arg1;
- (void)attachmentDidRefresh:(bool)arg1;
- (bool)attachmentHasMergeableData;
- (id)attachmentIdentifiersOrderedSet;
- (id)attachmentIdentifiersOrderedSetDocument;
- (void)attachmentWillRefresh:(bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (bool)canSaveURL;
- (bool)canSaveURLWithOtherAttachments;
- (void)enumerateSubAttachmentsWithBlock:(id /* block */)arg1;
- (id)firstSubAttachment;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)arg1;
- (void)insertSubAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)mergeWithMergeableData:(id)arg1 mergeableFieldState:(id)arg2;
- (long long)previewImageOrientation;
- (id)previewImageTypeUTI;
- (bool)providesStandaloneTitleForNote;
- (void)removeSubAttachment:(id)arg1;
- (id)searchableStringArray;
- (id)searchableTextContent;
- (short)sectionForSubAttachments;
- (void)setAttachmentIdentifiersOrderedSetDocument:(id)arg1;
- (bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)singleSubAttachmentAtIndex:(unsigned long long)arg1;
- (id)standaloneTitleForNote;
- (unsigned long long)subAttachmentCount;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)arg1;
- (id)subAttachmentIdentifiers;
- (id)titleForSubAttachment:(id)arg1;
- (void)undeleteSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(bool)arg1;
- (void)writeMergeableData;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)itemProviderUTI;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)registerFileLoadHandlersOnItemProvider:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItems;
- (id)blockingGeneratePDFURL;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)needToGeneratePreviews;
- (id)previewItemURL;
- (id)providerFileTypes;
- (id)quicklookPreviewItems;

@end
