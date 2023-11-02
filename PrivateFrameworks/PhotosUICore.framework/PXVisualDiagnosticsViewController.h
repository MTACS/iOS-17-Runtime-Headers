
@interface PXVisualDiagnosticsViewController : UIViewController <PXTapToRadarDiagnosticProvider> {
    PDFDocument * _document;
    PDFView * _documentView;
}

@property (nonatomic, copy) PDFDocument *document;
@property (nonatomic, readonly) PDFView *documentView;

- (void).cxx_destruct;
- (void)_handleActionBarButtonItem:(id)arg1;
- (void)_handleDoneBarButtonItem:(id)arg1;
- (void)_handleTapToRadarButton:(id)arg1;
- (void)_invalidateDocumentView;
- (void)_updateDocumentView;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)document;
- (id)documentView;
- (void)setDocument:(id)arg1;
- (void)viewDidLoad;

@end
