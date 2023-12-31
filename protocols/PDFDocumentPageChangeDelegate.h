
@protocol PDFDocumentPageChangeDelegate <NSObject>

@optional

- (void)didInsertPage:(PDFPage *)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(PDFPage *)arg1 atIndex:(unsigned long long)arg2;
- (void)didSwapPage:(PDFPage *)arg1 atIndex:(unsigned long long)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)willInsertPage:(PDFPage *)arg1 atIndex:(unsigned long long)arg2;
- (void)willRemovePage:(PDFPage *)arg1 atIndex:(unsigned long long)arg2;
- (void)willSwapPage:(PDFPage *)arg1 atIndex:(unsigned long long)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;

@end
