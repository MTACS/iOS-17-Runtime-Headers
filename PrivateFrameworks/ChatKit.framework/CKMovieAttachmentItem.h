
@interface CKMovieAttachmentItem : CKAttachmentItem

+ (id)UTITypes;

- (struct CGSize { double x1; double x2; })_defaultSize;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (bool)isIrisAsset;
- (bool)isJellyfishVideo;
- (id)previewItemTitle;
- (struct CGSize { double x1; double x2; })size;

@end
