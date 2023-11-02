
@protocol PDFThumbnailCollectionViewInterface

@required

- (PDFPage *)currentPage;
- (void)currentPageChanged:(NSNotification *)arg1;
- (void)documentChanged:(NSNotification *)arg1;
- (void)documentMutated:(NSNotification *)arg1;
- (id)initFromThumbnailView:(PDFThumbnailView *)arg1;
- (void)pageChanged:(NSNotification *)arg1;
- (void)updateIconsImages;

@end
