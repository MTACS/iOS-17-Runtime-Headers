
@interface ICAttachmentImageModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (bool)canMarkup;
- (bool)canSaveURL;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (bool)needsFullSizePreview;
- (double)placeholderHeight;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (id)previewItemTitle;
- (id)saveURL;
- (bool)shouldCropImage;
- (bool)shouldUsePlaceholderBoundsIfNecessary;
- (bool)showThumbnailInNoteList;
- (struct CGSize { double x1; double x2; })sizeByCroppingSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsImageClassification;
- (bool)supportsOCR;
- (bool)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)registerFileLoadHandlersOnItemProvider:(id)arg1;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItems;
- (id)classificationsForImage:(id)arg1;
- (void)classifyImageInOperation:(id)arg1;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)generateFullSizePreviewWithAttachmentIdentifier:(id)arg1 existingPreviewImage:(id)arg2 markupModelData:(id)arg3 imageOrientation:(long long)arg4 imageFilterType:(short)arg5 mediaDecryptedData:(id)arg6 mediaURL:(id)arg7 mediaSize:(struct CGSize { double x1; double x2; })arg8 croppingQuad:(id)arg9;
- (void)generateOCRInOperation:(id)arg1;
- (bool)generatePreviewsDuringCloudActivity;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (id)labelsForClassificationObservations:(id)arg1;
- (bool)needToGeneratePreviews;
- (bool)needToPostProcessAttachment;

@end
