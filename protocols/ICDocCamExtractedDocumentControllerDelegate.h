
@protocol ICDocCamExtractedDocumentControllerDelegate <NSObject>

@required

- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1;
- (void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1;

@optional

- (void)extractedDocumentController:(ICDocCamExtractedDocumentViewController *)arg1 didTapRecrop:(ICDocCamDocumentInfo *)arg2 index:(long long)arg3;
- (void)extractedDocumentController:(ICDocCamExtractedDocumentViewController *)arg1 shareDocument:(ICDocCamDocumentInfo *)arg2 sender:(id)arg3;
- (void)extractedDocumentController:(void *)arg1 startMarkupOnDocument:(void *)arg2 inkStyle:(void *)arg3 startPresentBlock:(void *)arg4 dismissCompletionBlock:(void *)arg5; // needs 5 arg types, found 18: ICDocCamExtractedDocumentViewController *, ICDocCamDocumentInfo *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, id /* block */, void*, void, id /* block */, void*
- (void)extractedDocumentControllerDidApplyFilter:(short)arg1 forDocument:(ICDocCamDocumentInfo *)arg2;
- (void)extractedDocumentControllerDidChangeTitle:(NSString *)arg1;
- (void)extractedDocumentControllerDidDeleteDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidDismiss;
- (void)extractedDocumentControllerDidMovePageFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 forDocument:(ICDocCamDocumentInfo *)arg3;
- (void)extractedDocumentControllerDidRotateDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(ICDocCamDocumentInfo *)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 sourceView:(UIView *)arg3;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id <DCScanDataDelegate>)arg2;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(ICDocCamDocumentInfo *)arg1;
- (UIImage *)extractedDocumentControllerImageForDocument:(ICDocCamDocumentInfo *)arg1;
- (struct CGSize { double x1; double x2; })extractedDocumentControllerImageSizeForDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerLoadThumbnailForDocument:(void *)arg1 size:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: ICDocCamDocumentInfo *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (NSData *)extractedDocumentControllerMarkupModelDataForDocument:(ICDocCamDocumentInfo *)arg1;
- (NSString *)extractedDocumentControllerTitle;
- (UIImage *)extractedDocumentControllerUncroppedImageForDocument:(ICDocCamDocumentInfo *)arg1;
- (NSUndoManager *)extractedDocumentControllerUndoManager;

@end
