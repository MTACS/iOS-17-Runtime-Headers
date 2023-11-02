
@interface CKAnimatedImageMediaObject : CKImageMediaObject <IMAnimatedImagePreviewGeneratorProtocol, NSSecureCoding> {
    unsigned long long  _stickerEffectType;
}

@property (nonatomic) unsigned long long stickerEffectType;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (double)maxPixelDimensionOfThumbnailWithImagePixelSize:(struct CGSize { double x1; double x2; })arg1 forWidth:(double)arg2 isSticker:(bool)arg3;
+ (bool)supportsSecureCoding;

- (id)animatedImageForWidth:(double)arg1;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)canPerformQuickAction;
- (void)encodeWithCoder:(id)arg1;
- (id)generateAndPersistAnimatedPreviewFromImageData:(id)arg1 forWidth:(double)arg2 withTransferGUID:(id)arg3 isSticker:(bool)arg4;
- (id)generateAndPersistAnimatedPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 forWidth:(double)arg3 withTransferGUID:(id)arg4 isSticker:(bool)arg5;
- (id)generateThumbnailsForWidth:(double)arg1 isSticker:(bool)arg2 orientation:(BOOL)arg3;
- (id /* block */)imageEdgeEnhancementBlockIfNecessary;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransfer:(id)arg1 context:(id)arg2 forceInlinePreview:(bool)arg3;
- (id)metricsCollectorMediaType;
- (bool)needsAnimation;
- (id)notificationCenter;
- (unsigned long long)oopPreviewRequestBudget;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2 isSticker:(bool)arg3;
- (void)setStickerEffectType:(unsigned long long)arg1;
- (unsigned long long)stickerEffectType;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 imageData:(id)arg3 isSticker:(bool)arg4 orientation:(BOOL)arg5;
- (bool)validPreviewExistsAtURL:(id)arg1;
- (bool)validatePreviewFormat;

@end
