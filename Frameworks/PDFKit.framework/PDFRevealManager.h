
@interface PDFRevealManager : NSObject {
    PDFRevealManagerPrivate * _private;
}

- (void).cxx_destruct;
- (id)PDFRVDocumentContextForPage:(id)arg1;
- (id)PDFRVPresenter;
- (id)PDFRVPresentingContextAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithPDFView:(id)arg1;
- (void)reset;

@end
