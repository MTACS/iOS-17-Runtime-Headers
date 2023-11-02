
@interface PaperKit.PaperDocumentView : UIView <PDFDocumentDelegatePrivate, PDFPageOverlayViewProvider, PDFViewDelegatePrivate, PKToolPickerObserver, UIDocumentPickerDelegate, VNDocumentCameraViewControllerDelegate> {
    void _insertingFromFileIndex;
    void _rulerHostingDelegate;
    void automaticallyAdjustScaleFactor;
    void automaticallyApplySafeAreaInsetsToAxes;
    void canEditVellumOpacity;
    void context;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dataModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dataModelInitialState;
    void delegate;
    void docScanDismissBlock;
    void editingMode;
    void isCurrentlyLiveEditing;
    void isInMarkupMode;
    void isUpdatingPDFDocument;
    void liveEditingContinuations;
    void livePassThroughSubject;
    void liveStreamMessenger;
    void multipeerConnection;
    void pageOverlayViewProvider;
    void pageToOverlayMap;
    void paperDocumentVC;
    void participantDetailsDataSource;
    void passThroughSubject;
    void pdfDocument;
    void pdfView;
    void quadEditorController;
    void rulerHostView;
    void showParticipantCursors;
    void thumbnailView;
    void tiledView;
    void toolPicker;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updateDocAsset;
    void updateDocTask;
    void validPasteUTTypeIdentifiers;
    void vellumOpacity;
    void viewControllerForPresenting;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewUUID;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (void)PDFView:(id)arg1 allowsFormFillingMode:(bool)arg2 forPage:(id)arg3;
- (void)PDFView:(id)arg1 allowsFormFillingMode:(bool)arg2 withAutofill:(bool)arg3 forPage:(id)arg4;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (void)annotationPropertiesChanged:(id)arg1;
- (void)annotationsChanged:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)documentCameraViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)documentCameraViewController:(id)arg1 didFinishWithScan:(id)arg2;
- (void)documentCameraViewControllerDidCancel:(id)arg1;
- (bool)documentCanBeEdited:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pdfDocument:(id)arg1 detectedAnnotations:(id)arg2 forPage:(id)arg3;
- (void)pdfDocument:(id)arg1 didReceiveAnalysis:(id)arg2 forPage:(id)arg3;
- (void)pdfDocument:(id)arg1 handleTabFrom:(id)arg2 direction:(unsigned long long)arg3;
- (void)pdfSelectionChanged:(id)arg1;
- (id)pdfView:(id)arg1 overlayViewForPage:(id)arg2;
- (void)pdfView:(id)arg1 willDisplayOverlayView:(id)arg2 forPage:(id)arg3;
- (void)pdfView:(id)arg1 willEndDisplayingOverlayView:(id)arg2 forPage:(id)arg3;
- (bool)respondsToSelector:(SEL)arg1;
- (void)toolPickerIsRulerActiveDidChange:(id)arg1;
- (void)toolPickerSelectedToolDidChange:(id)arg1;
- (void)toolPickerVisibilityDidChange:(id)arg1;

@end
