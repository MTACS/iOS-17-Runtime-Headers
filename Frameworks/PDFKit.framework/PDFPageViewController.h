
@interface PDFPageViewController : UIViewController <PDFTextInputDelegate, UIScrollViewDelegate> {
    PDFPageViewControllerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)PDFPage;
- (void)_buildPDFPageView;
- (void)_centerAlign;
- (void)_removePDFView;
- (void)_setupGestureRecognizerDependencies;
- (void)_updateAnnotations;
- (double)autoScaleFactor;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)dealloc;
- (void)didRotatePageNotification:(id)arg1;
- (void)enforceAutoScaleFactor;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)pageView;
- (id)pdfView;
- (void)removeAKOverlay;
- (double)scaleFactor;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)selection;
- (void)setAutoScales:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (void)setPDFPage:(id)arg1;
- (void)setPDFView:(id)arg1;
- (void)setPageBreakMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRenderingProperties:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSelection:(id)arg1;
- (id)textInputView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
