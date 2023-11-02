
@interface ICAttachmentDrawingModel : ICAttachmentModel {
    ICDrawingVersionedDocument * _drawingDocument;
    bool  _observingAttachment;
}

@property (nonatomic, readonly) ICDrawing *drawing;
@property (nonatomic, readonly) UIImage *imageForActivityItem;
@property (nonatomic) bool observingAttachment;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)attachmentIsDeallocating:(id)arg1;
- (bool)canSaveURL;
- (void)dealloc;
- (id)drawing;
- (id)drawingDocument;
- (void)drawingPreviewIsUpToDate;
- (bool)hasPreviews;
- (id)initWithAttachment:(id)arg1;
- (bool)mergeWithMergeableData:(id)arg1 mergeableFieldState:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)observingAttachment;
- (bool)preferLocalPreviewImages;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previewImageOrientationTransform;
- (id)previewImageURL;
- (id)previewItemTitle;
- (id)previewItemURL;
- (bool)previewsSupportMultipleAppearances;
- (id)saveURL;
- (void)setObservingAttachment:(bool)arg1;
- (bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (bool)showThumbnailInNoteList;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)arg1;
- (bool)supportsQuickLook;
- (void)writeMergeableData;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)itemProviderUTI;
- (id)itemProviderWritingData;
- (id)itemProviderWritingURL;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItem;
- (id)activityItems;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (id)dataForTypeIdentifier:(id)arg1;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (bool)generatePreviewsDuringCloudActivity;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (id)imageForActivityItem;
- (bool)needToGeneratePreviews;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (void)saveDrawing:(id)arg1 withImage:(id)arg2 forImageDrawing:(id)arg3;

@end
