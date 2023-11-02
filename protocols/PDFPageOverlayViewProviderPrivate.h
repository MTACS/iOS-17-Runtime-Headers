
@protocol PDFPageOverlayViewProviderPrivate <PDFPageOverlayViewProvider>

@optional

- (void)setupGestureRecognizersForView:(PDFView *)arg1;
- (bool)shouldVerticallyFlipOverlayViews;
- (void)teardownGestureRecognizersForView:(PDFView *)arg1;

@end
