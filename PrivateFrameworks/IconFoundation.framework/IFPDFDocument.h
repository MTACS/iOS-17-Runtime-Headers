
@interface IFPDFDocument : NSObject {
    struct CGPDFDocument { } * _pdfDocument;
    NSURL * _url;
}

@property (readonly) unsigned long long numberOfPages;
@property struct CGPDFDocument { }*pdfDocument;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (void)dealloc;
- (id)firstPage;
- (id)initWithURL:(id)arg1;
- (unsigned long long)numberOfPages;
- (id)pageAtIndex:(unsigned long long)arg1;
- (struct CGPDFDocument { }*)pdfDocument;
- (void)setPdfDocument:(struct CGPDFDocument { }*)arg1;
- (id)url;

@end
