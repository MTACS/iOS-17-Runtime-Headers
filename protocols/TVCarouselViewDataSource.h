
@protocol TVCarouselViewDataSource <NSObject>

@required

- (UICollectionViewCell *)carouselView:(_TVCarouselView *)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(_TVCarouselView *)arg1;

@end
