
@interface IFPDFPage : NSObject {
    struct CGPDFPage { } * _pdfPage;
}

@property struct CGPDFPage { }*pdfPage;

- (void)dealloc;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (struct CGPDFPage { }*)pdfPage;
- (void)setPdfPage:(struct CGPDFPage { }*)arg1;

@end
