
@protocol PDFHostViewControllerDelegate <NSObject>

@optional

- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressURL:(NSURL *)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressURL:(NSURL *)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 documentDidUnlockWithPassword:(NSString *)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 findStringUpdate:(unsigned long long)arg2 done:(bool)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToPageIndex:(long long)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToURL:(NSURL *)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToURL:(NSURL *)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 updateCurrentPageIndex:(long long)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 updatePageCount:(long long)arg2;
- (void)pdfHostViewControllerDocumentDidRequestPassword:(PDFHostViewController *)arg1;
- (void)pdfHostViewControllerExtensionProcessDidCrash:(PDFHostViewController *)arg1;

@end
