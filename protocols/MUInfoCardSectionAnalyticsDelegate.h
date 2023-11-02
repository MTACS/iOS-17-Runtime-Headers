
@protocol MUInfoCardSectionAnalyticsDelegate <_MKInfoCardChildViewControllerAnalyticsDelegate>

@required

- (GEOAPPlaceCardModule *)analyticsModule;
- (GEORevealedPlaceCardModule *)revealedAnalyticsModule;

@end
