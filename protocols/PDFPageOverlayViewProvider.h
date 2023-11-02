
@protocol PDFPageOverlayViewProvider <NSObject>

@required

- (UIView *)pdfView:(PDFView *)arg1 overlayViewForPage:(PDFPage *)arg2;

@optional

- (void)pdfView:(PDFView *)arg1 willDisplayOverlayView:(UIView *)arg2 forPage:(PDFPage *)arg3;
- (void)pdfView:(PDFView *)arg1 willEndDisplayingOverlayView:(UIView *)arg2 forPage:(PDFPage *)arg3;

@end
