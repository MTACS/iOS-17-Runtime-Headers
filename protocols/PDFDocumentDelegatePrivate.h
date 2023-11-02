
@protocol PDFDocumentDelegatePrivate <PDFDocumentDelegate>

@optional

- (bool)documentCanBeEdited:(PDFDocument *)arg1;
- (void)pdfDocument:(PDFDocument *)arg1 detectedAnnotations:(NSArray *)arg2 forPage:(PDFPage *)arg3;
- (void)pdfDocument:(PDFDocument *)arg1 didReceiveAnalysis:(VKCImageAnalysis *)arg2 forPage:(PDFPage *)arg3;
- (void)pdfDocument:(PDFDocument *)arg1 handleTabFrom:(PDFAnnotation *)arg2 direction:(unsigned long long)arg3;
- (void)pdfDocument:(PDFDocument *)arg1 loadedAnnotations:(NSArray *)arg2 forPage:(PDFPage *)arg3;
- (bool)requestAccessPermissions:(unsigned int)arg1;
- (bool)shouldReadAKInkAnnotations;

@end
