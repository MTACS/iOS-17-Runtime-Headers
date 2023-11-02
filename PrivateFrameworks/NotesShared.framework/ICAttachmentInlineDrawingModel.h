
@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (nonatomic, readonly) PKDrawing *handwritingRecognitionDrawing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
@property (getter=isHandwritingRecognitionEnabled, nonatomic) bool handwritingRecognitionEnabled;
@property (nonatomic, readonly) UIImage *imageForActivityItem;
@property (getter=isTitleQueryEnabled, nonatomic) bool titleQueryEnabled;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)arg1;
- (id)handwritingRecognitionDrawing;
- (bool)hasPreviews;
- (bool)isIncludedInGenericAttachmentCount;
- (id)newDrawingFromMergeableData;
- (bool)preferLocalPreviewImages;
- (bool)previewsSupportMultipleAppearances;
- (bool)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (void)setHandwritingRecognitionDrawing:(id)arg1;
- (bool)shouldShowInContentInfoText;
- (bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

+ (id)inlineDrawingTextFindingQueue;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)textFindingResultsMatchingString:(id)arg1 ignoreCase:(bool)arg2 wholeWords:(bool)arg3 completion:(id /* block */)arg4;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (unsigned short)drawingPreviewVersion;
+ (id)generateImageForAttachment:(id)arg1 fromDrawing:(id)arg2 fullResolution:(bool)arg3 appearanceInfo:(id)arg4;
+ (void)generatePreviewsForAttachment:(id)arg1 fromDrawing:(id)arg2;
+ (bool)handwritingRecognitionSupported;
+ (id)previewImageFromDrawing:(id)arg1 fullImage:(struct CGImage { }*)arg2 scale:(double)arg3;

- (id)activityItem;
- (id)activityItems;
- (bool)actuallyMergeWithDrawing:(id)arg1;
- (void)attachmentModelDealloc;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)generatePreviewsDuringCloudActivity;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id)handwritingRecognitionDrawingQueue;
- (id)imageForActivityItem;
- (bool)isHandwritingRecognitionEnabled;
- (bool)isTitleQueryEnabled;
- (bool)mergeWithDrawing:(id)arg1;
- (bool)mergeWithMergeableData:(id)arg1 mergeableFieldState:(id)arg2;
- (id)mergeableDataForCopying:(id*)arg1;
- (bool)needToGeneratePreviews;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;
- (void)setHandwritingRecognitionEnabled:(bool)arg1;
- (void)setTitleQuery:(id)arg1;
- (void)setTitleQueryEnabled:(bool)arg1;
- (id)titleQuery;
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;
- (id)titleQueryDrawingDispatchQueue:(id)arg1;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;

@end
