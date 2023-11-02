
@interface CKOrderMediaObject : CKMediaObject <CKMediaObjectMetadataPreview> {
    FKOrderMessagesPreviewMetadata * _metadata;
    NSURL * _overrideFileURL;
    NSURL * _overrideMetadataProperties;
    LPWebLinkPresentationProperties * _presentationProperties;
}

@property (nonatomic, retain) FKOrderMessagesPreviewMetadata *metadata;
@property (nonatomic, retain) NSURL *overrideFileURL;
@property (nonatomic, retain) NSURL *overrideMetadataProperties;
@property (nonatomic, retain) LPWebLinkPresentationProperties *presentationProperties;
@property (nonatomic, readonly, copy) NSString *previewMetadataFilenameExtension;
@property (nonatomic, readonly) bool supportsPreviewMetadata;

+ (id)UTITypes;
+ (id)_modifyColor:(id)arg1 lighten:(bool)arg2;
+ (id)_paddedImage:(id)arg1 imageType:(unsigned char)arg2 bubbleWidth:(double)arg3;
+ (void)_setTextForPresentationRow:(id)arg1 representation:(id)arg2;
+ (void)_updatePresentationPropertiesForRow:(id)arg1 representation:(id)arg2;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;
+ (bool)shouldUseTranscoderGeneratedPreviewSize;

- (void).cxx_destruct;
- (id)_initWithOverrideFileURL:(id)arg1;
- (id)attachmentSummary:(unsigned long long)arg1;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)generatePreviewMetadata;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)isSupported;
- (int)mediaType;
- (id)metadata;
- (id)metricsCollectorMediaType;
- (id)overrideFileURL;
- (id)overrideMetadataProperties;
- (id)presentationProperties;
- (id)presentationPropertiesForReplyPreview;
- (id)presentationPropertiesForWidth:(double)arg1;
- (id)presentationPropertiesForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (id)previewMetadata;
- (id)previewMetadataFilenameExtension;
- (id)previewMetadataWithContentsOfURL:(id)arg1 error:(out id*)arg2;
- (void)setMetadata:(id)arg1;
- (void)setOverrideFileURL:(id)arg1;
- (void)setOverrideMetadataProperties:(id)arg1;
- (void)setPresentationProperties:(id)arg1;
- (bool)shouldBeQuickLooked;
- (bool)shouldShowDisclosure;
- (bool)shouldShowViewer;
- (bool)supportsPreviewMetadata;
- (bool)writePreviewMetadata:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;

@end
