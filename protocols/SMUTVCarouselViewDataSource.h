
@protocol SMUTVCarouselViewDataSource <NSObject>

@required

- (UICollectionViewCell *)carouselView:(UIView<SMUTVCarouselView> *)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCarouselView:(UIView<SMUTVCarouselView> *)arg1;

@end
