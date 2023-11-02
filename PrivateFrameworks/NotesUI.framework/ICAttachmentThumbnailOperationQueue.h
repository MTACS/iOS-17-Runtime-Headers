
@interface ICAttachmentThumbnailOperationQueue : NSOperationQueue

- (void)addOperationWithAttachment:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8 fallbackBlock:(id /* block */)arg9;
- (id)checkPreviewImagesIntegrityOperationForAttachment:(id)arg1;

@end
