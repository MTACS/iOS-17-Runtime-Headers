
@protocol PDFViewDelegate <NSObject>

@optional

- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (UIViewController *)PDFViewParentViewController;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;

@end
