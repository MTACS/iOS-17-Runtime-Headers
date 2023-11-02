
@protocol MUCuratedCollectionsPlacecardAnalytics <NSObject>

@required

- (void)placecardCollectionTapped:(GEOMapItemIdentifier *)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(bool)arg3;
- (void)placecardCollectionsScrollBackward;
- (void)placecardCollectionsScrollForward;
- (void)placecardCollectionsSeeAllTapped;
- (void)placecardExploreGuidesButtonTapped;

@end
