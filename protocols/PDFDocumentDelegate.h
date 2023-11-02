
@protocol PDFDocumentDelegate <NSObject>

@optional

- (Class)classForAnnotationType:(NSString *)arg1;
- (Class)classForPage;
- (void)didMatchString:(PDFSelection *)arg1;
- (void)documentDidBeginDocumentFind:(NSNotification *)arg1;
- (void)documentDidBeginPageFind:(NSNotification *)arg1;
- (void)documentDidEndDocumentFind:(NSNotification *)arg1;
- (void)documentDidEndPageFind:(NSNotification *)arg1;
- (void)documentDidFindMatch:(NSNotification *)arg1;
- (void)documentDidUnlock:(NSNotification *)arg1;

@end
