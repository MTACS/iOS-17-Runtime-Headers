
@interface MUCGPDFFormWrapper : NSObject {
    struct CGPDFForm { } * _pdfForm;
}

@property (readonly) struct CGPDFForm { }*pdfForm;

- (void)dealloc;
- (id)initWithForm:(struct CGPDFForm { }*)arg1;
- (struct CGPDFForm { }*)pdfForm;

@end
