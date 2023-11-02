
@protocol PPKPDFThumbnailContextMenuDelegate <NSObject>

@required

- (void)didSelectPage;
- (NSArray *)menuElementsForPage:(PDFPage *)arg1;
- (UIAction *)pasteActionForPage:(PDFPage *)arg1;
- (void)registerFileRepresentationsForPage:(long long)arg1 toItemProvider:(NSItemProvider *)arg2;

@end
