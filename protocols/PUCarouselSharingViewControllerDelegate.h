
@protocol PUCarouselSharingViewControllerDelegate <NSObject>

@optional

- (void)carouselSharingViewController:(PUCarouselSharingViewController *)arg1 addAssetItem:(PUActivityAssetItem *)arg2;
- (void)carouselSharingViewController:(PUCarouselSharingViewController *)arg1 removeAssetItem:(PUActivityAssetItem *)arg2;
- (void)carouselSharingViewController:(PUCarouselSharingViewController *)arg1 replaceAssetItem:(PUActivityAssetItem *)arg2 withAssetItem:(PUActivityAssetItem *)arg3;
- (void)carouselSharingViewController:(PUCarouselSharingViewController *)arg1 setAssetItems:(NSOrderedSet *)arg2;

@end
