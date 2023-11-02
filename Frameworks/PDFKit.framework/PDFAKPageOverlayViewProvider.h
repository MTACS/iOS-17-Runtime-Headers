
@interface PDFAKPageOverlayViewProvider : NSObject <PDFPageOverlayViewProviderPrivate> {
    AKController * _akController;
    PDFDocument * _pdfDocument;
    PDFView * _pdfView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldVerticallyFlipOverlayViews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPDFDocument:(id)arg1 pdfView:(id)arg2 andAKController:(id)arg3;
- (void)overlayViewInstalledForPage:(id)arg1;
- (void)overlayViewWillBeUninstalledForPage:(id)arg1;
- (id)pdfView:(id)arg1 overlayViewForPage:(id)arg2;
- (void)pdfView:(id)arg1 willEndDisplayingOverlayView:(id)arg2 forPage:(id)arg3;
- (void)setupGestureRecognizersForView:(id)arg1;
- (bool)shouldVerticallyFlipOverlayViews;
- (void)teardownGestureRecognizersForView:(id)arg1;

@end
