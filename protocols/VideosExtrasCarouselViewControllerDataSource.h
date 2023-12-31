
@protocol VideosExtrasCarouselViewControllerDataSource

@required

- (unsigned long long)carouselSize;
- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 configureCarouselCollectionViewCell:(id <VideosExtrasCarouselCollectionViewCell>)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize { double x1; double x2; })arg4;
- (unsigned long long)numberOfItemsInCarouselViewController:(VideosExtrasCarouselViewController *)arg1;

@end
