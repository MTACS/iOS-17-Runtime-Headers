
@interface HKCDAPDFGenerator : NSObject

+ (id)PDFTranslator;

- (void)_finishGenerationWithURL:(id)arg1 tempFileDescriptor:(int)arg2 completionHandler:(id /* block */)arg3 error:(id)arg4;
- (void)_pdfForHTML:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generatePDFForCDAXML:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
