
@protocol MKCollectionCarouselAnalyticsDelegate <NSObject>

@required

- (void)collectionsCarouselDidRouteToCollectionId:(GEOMapItemIdentifier *)arg1 atIndex:(long long)arg2 isSaved:(bool)arg3;

@optional

- (void)collectionsCarouselDidScrollBackward;
- (void)collectionsCarouselDidScrollDown;
- (void)collectionsCarouselDidScrollForward;
- (void)collectionsCarouselDidScrollUp;
- (void)exploreGuidesButtonTapped;

@end
