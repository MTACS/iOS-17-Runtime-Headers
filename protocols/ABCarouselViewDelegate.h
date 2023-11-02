
@protocol ABCarouselViewDelegate <NSObject>

@optional

- (void)carouselView:(ABCarouselView *)arg1 didDragToOffset:(double)arg2 initialOffset:(double)arg3;
- (void)carouselView:(ABCarouselView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)carouselViewWillEndDragging:(ABCarouselView *)arg1;
- (void)carouselViewWillStartDragging:(ABCarouselView *)arg1;

@end
