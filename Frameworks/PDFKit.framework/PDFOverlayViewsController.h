
@interface PDFOverlayViewsController : NSObject {
    bool  _isTornDown;
    NSMutableIndexSet * _observedPageIndices;
    NSMapTable * _pageToOverlayMap;
    PDFDocument * _pdfDocument;
    PDFView * _pdfView;
    <PDFPageOverlayViewProvider> * _viewProvider;
}

@property PDFDocument *pdfDocument;
@property PDFView *pdfView;
@property <PDFPageOverlayViewProvider> *viewProvider;

+ (id)instanceForPlatformWithPDFView:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedOverlayViewForPage:(id)arg1;
- (id)_callOverlayViewForPage:(id)arg1;
- (void)_callWillEndDisplayingOverlayViewForPage:(id)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_pageRotationChanged:(id)arg1;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_teardown;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_uninstallAllOverlays;
- (void)_uninstallOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;
- (id)pdfDocument;
- (id)pdfView;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didSetDocument:(id)arg2;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 willSetDocument:(id)arg2;
- (void)setPdfDocument:(id)arg1;
- (void)setPdfView:(id)arg1;
- (void)setViewProvider:(id)arg1;
- (void)teardown;
- (id)viewProvider;

@end
