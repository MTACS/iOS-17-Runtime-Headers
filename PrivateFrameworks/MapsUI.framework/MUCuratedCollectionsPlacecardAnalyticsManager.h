
@interface MUCuratedCollectionsPlacecardAnalyticsManager : NSObject <MUCuratedCollectionsPlacecardAnalytics> {
    struct CollectionsPlacecardEvent { 
        int action; 
        NSString *value; 
        NSNumber *collectionId; 
        NSNumber *collectionCurrentlySaved; 
        NSNumber *horizontalIndex; 
        int target; 
        int cardType; 
        NSMutableArray *possibleActions; 
        NSMutableArray *impossibleActions; 
        NSNumber *verticalIndex; 
    }  _event;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)init;
- (void)logEvent;
- (void)placecardCollectionTapped:(id)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(bool)arg3;
- (void)placecardCollectionsScrollBackward;
- (void)placecardCollectionsScrollForward;
- (void)placecardCollectionsSeeAllTapped;
- (void)placecardExploreGuidesButtonTapped;

@end
