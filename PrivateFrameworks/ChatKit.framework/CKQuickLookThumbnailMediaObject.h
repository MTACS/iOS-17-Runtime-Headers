
@interface CKQuickLookThumbnailMediaObject : CKMediaObject

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;

- (id)attachmentSummary:(unsigned long long)arg1;
- (id)diskCachedThumbnailForOrientation:(BOOL)arg1;
- (bool)isPreviewable;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)shouldSuppressPreview;

@end
