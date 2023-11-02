
@interface CUINamedVectorImage : CUINamedLookup

@property (nonatomic, readonly) struct CGPDFDocument { }*pdfDocument;
@property (nonatomic, readonly) double scale;

- (struct CGPDFDocument { }*)pdfDocument;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2;
- (double)scale;

@end
