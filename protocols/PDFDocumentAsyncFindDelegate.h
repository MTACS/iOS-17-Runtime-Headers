
@protocol PDFDocumentAsyncFindDelegate <NSObject>

@optional

- (bool)cancelFind;
- (void)foundResults:(NSArray *)arg1 forDocument:(PDFDocument *)arg2;
- (void)foundResults:(NSArray *)arg1 forPage:(PDFPage *)arg2;

@end
