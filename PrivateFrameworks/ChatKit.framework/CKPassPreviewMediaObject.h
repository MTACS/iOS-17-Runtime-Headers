
@interface CKPassPreviewMediaObject : CKPassbookMediaObject <CKMediaObjectMetadataPreview> {
    NSURL * _overrideFileURL;
    NSURL * _overrideMetadataProperties;
    PKPassSecurePreviewContext * _passPreview;
    LPWebLinkPresentationProperties * _presentationProperties;
}

@property (nonatomic, retain) NSURL *overrideFileURL;
@property (nonatomic, retain) NSURL *overrideMetadataProperties;
@property (nonatomic, retain) PKPassSecurePreviewContext *passPreview;
@property (nonatomic, retain) LPWebLinkPresentationProperties *presentationProperties;
@property (nonatomic, readonly, copy) NSString *previewMetadataFilenameExtension;
@property (nonatomic, readonly) bool supportsPreviewMetadata;

+ (id)_colorFromColorString:(id)arg1;
+ (id)_darkenColor:(id)arg1;
+ (void)_setTextForPresentationRow:(id)arg1 representation:(id)arg2;
+ (void)_updatePresentationPropertiesForRow:(id)arg1 representation:(id)arg2;
+ (void)_updatePresentationPropertiesForRow:(id)arg1 text:(id)arg2 color:(id)arg3;
+ (bool)isPreviewable;
+ (bool)isSupported;
+ (bool)shouldUseTranscoderGeneratedPreviewSize;

- (void).cxx_destruct;
- (id)_initWithOverrideFileURL:(id)arg1;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)fileURL;
- (id)generatePreviewMetadata;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)overrideFileURL;
- (id)overrideMetadataProperties;
- (id)passPreview;
- (id)presentationProperties;
- (id)presentationPropertiesForReplyPreview;
- (id)presentationPropertiesForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)previewBalloonViewClass;
- (id)previewMetadata;
- (id)previewMetadataFilenameExtension;
- (id)previewMetadataWithContentsOfURL:(id)arg1 error:(out id*)arg2;
- (void)setOverrideFileURL:(id)arg1;
- (void)setOverrideMetadataProperties:(id)arg1;
- (void)setPassPreview:(id)arg1;
- (void)setPresentationProperties:(id)arg1;
- (bool)supportsPreviewMetadata;
- (bool)writePreviewMetadata:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;

@end
