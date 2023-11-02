
@interface PDFIconsView : UIView <PDFThumbnailCollectionViewInterface> {
    PDFPageIconLayer * _activeIcon;
    NSMutableArray * _icons;
    PDFThumbnailView * _thumbnailView;
}

- (void).cxx_destruct;
- (int)_iconsLayoutIconCount;
- (struct CGSize { double x1; double x2; })_iconsLayoutSize;
- (void)_updateScrubberAtViewLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateScrubberForPageIndex:(int)arg1 goToPage:(bool)arg2;
- (id)currentPage;
- (void)currentPageChanged:(id)arg1;
- (void)documentChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (id)initFromThumbnailView:(id)arg1;
- (void)layoutSubviews;
- (void)pageChanged:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateIconsImages;

@end
