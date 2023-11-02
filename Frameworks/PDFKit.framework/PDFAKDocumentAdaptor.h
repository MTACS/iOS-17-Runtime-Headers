
@interface PDFAKDocumentAdaptor : NSObject <AKControllerDelegateProtocol, PKRulerHostingDelegate> {
    AKController * _akController;
    AKToolbarView * _akToolbarView;
    struct TextAnnotationAnimationProperties { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } visibleTextViewRectInScrollView; 
        double animationDuration; 
        double originDelta; 
    }  _animationProperties;
    AKRectAnnotation * _editingAnnotaiton;
    bool  _isTornDown;
    double  _modelBaseScaleFactor;
    <PDFAKControllerDelegateProtocol> * _pdfAKControllerDelegate;
    PDFDocument * _pdfDocument;
    PDFView * _pdfView;
}

@property (nonatomic) <PDFAKControllerDelegateProtocol> *PDFAKControllerDelegate;
@property (nonatomic, readonly) AKModelController *akDocumentModelController;
@property (nonatomic, readonly) AKController *akMainController;
@property (nonatomic, readonly) UIView *akToolbarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *originalImageDescription;
@property (nonatomic, readonly) PDFDocument *pdfDocument;
@property (nonatomic) PDFView *pdfView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFormFill;
@property (nonatomic, readonly) bool supportsImageDescriptionEditing;

+ (bool)isHandlingEditDetected;
+ (void)setIsHandlingEditDetected:(bool)arg1;

- (void).cxx_destruct;
- (id)PDFAKControllerDelegate;
- (void)_adjustScrollViewWithAnimationProperties:(struct TextAnnotationAnimationProperties { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; })arg1 delta:(double)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compensatingAffineTransformForPage:(id)arg1;
- (void)_delayedModelBaseScaleFactorCalculation;
- (void)_pdfDocumentDidUnlock:(id)arg1;
- (void)_pdfViewDidChangeScale:(id)arg1;
- (void)_pdfViewDidLayout:(id)arg1;
- (void)_resetAnimationProperties;
- (void)_scheduleDelayedModelBaseScaleFactorCalculation;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_teardown;
- (void)_updatePDFScrollViewMinimumNumberOfTouches;
- (void)adjustScrollViewForKeyboardNotification:(id)arg1;
- (id)akDocumentModelController;
- (id)akMainController;
- (id)akToolbarView;
- (void)annotationDidEndEditing:(id)arg1;
- (void)annotationWillBeginEditing:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (bool)controllerShouldDetectFormElements:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillEnterToolMode:(id)arg1;
- (void)controllerWillExitToolMode:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)dealloc;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (bool)handleBackTabInTextEditorForAnnotation:(id)arg1 forAnnotationController:(id)arg2;
- (bool)handleTabInTextEditorForAnnotation:(id)arg1 forAnnotationController:(id)arg2;
- (void)handleTextSuggestion:(id)arg1 forAnnotationController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)initWithPDFDocument:(id)arg1 andView:(id)arg2;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(bool)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)pageIndexForAnnotation:(id)arg1;
- (id)pdfDocument;
- (void)pdfDocument:(id)arg1 didExchangePage:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4 atIndex:(unsigned long long)arg5;
- (void)pdfDocument:(id)arg1 didInsertPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocument:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocument:(id)arg1 didReplacePagePlaceholder:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4;
- (void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)arg1;
- (id)pdfView;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })positioningRectForCandidatePicker;
- (void)rotateLeft:(id)arg1;
- (void)rotateRight:(id)arg1;
- (bool)rulerHostWantsSharedRuler;
- (id)rulerHostingView;
- (void)setPDFAKControllerDelegate:(id)arg1;
- (void)setPdfView:(id)arg1;
- (bool)shouldAddTabControlsToTextEditorForAnnotation:(id)arg1 forAnnotationController:(id)arg2;
- (bool)shouldPlaceFormElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (bool)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)teardown;
- (id)undoManagerForAnnotationController:(id)arg1;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(bool)arg3 forAnnotationController:(id)arg4;

@end
