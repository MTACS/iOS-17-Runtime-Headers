
@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } * _pdfDocument;
}

- (void)dealloc;
- (id)init;
- (id)initWithPDF:(struct CGPDFDocument { }*)arg1;
- (struct CGPDFDocument { }*)pdfDocument;

@end
