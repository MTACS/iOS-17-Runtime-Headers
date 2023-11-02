
@protocol PDFViewDelegatePrivate <PDFViewDelegate>

@optional

- (void)PDFView:(PDFView *)arg1 allowsFormFillingMode:(bool)arg2 forPage:(PDFPage *)arg3;
- (void)PDFView:(PDFView *)arg1 allowsFormFillingMode:(bool)arg2 withAutofill:(bool)arg3 forPage:(PDFPage *)arg4;
- (void)PDFView:(PDFView *)arg1 allowsFormFillingMode:(bool)arg2 withRecognitionConfidence:(unsigned long long)arg3 forPage:(PDFPage *)arg4;
- (NSArray *)additionalEditMenuElementsForSelection:(PDFSelection *)arg1;
- (NSArray *)menuItems:(NSArray *)arg1 forPage:(PDFPage *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pdfViewContentInset;

@end
