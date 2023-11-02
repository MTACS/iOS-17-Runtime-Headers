
@interface PLLibraryClusterer : NSObject {
    NSCalendar * _calendar;
    <PLLibraryClustererDelegate> * _delegate;
    PLFrequentLocationManager * _frequentLocationManager;
    PLLocalCreationDateCreator * _localCreationDateCreator;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) <PLLibraryClustererDelegate> *delegate;
@property (nonatomic, readonly) PLFrequentLocationManager *frequentLocationManager;
@property (nonatomic, readonly) PLLocalCreationDateCreator *localCreationDateCreator;

+ (bool)_momentEligibleForSplit:(id)arg1;
+ (bool)highlightSplitBasedOnLocationTypeEnabled;
+ (bool)highlightSplitBasedOnOriginatorsEnabled;
+ (bool)highlightSplitBasedOnTimeAndLocationEnabled;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_createMomentsForDailyAssets:(id)arg1 currentMomentExistingMomentData:(id)arg2;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg1 clusters:(id)arg2;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg1;
- (id)_momentsSplitBetweenOriginatorsWithMoments:(id)arg1;
- (id)_momentsSplitOnLocationTypeWithMoments:(id)arg1;
- (id)_momentsSplitWithinDayWithMoments:(id)arg1;
- (bool)_shouldSplitMomentsWithTimeDistance:(double)arg1 locationDistance:(double)arg2;
- (id)_startDateComponentsForMomentCluster:(id)arg1;
- (id)calendar;
- (id)delegate;
- (id)frequentLocationManager;
- (id)initWithLocalCreationDateCreator:(id)arg1 frequentLocationManager:(id)arg2;
- (id)localCreationDateCreator;
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg1;
- (id)momentClustersForMomentsSortedByDate:(id)arg1 allowLocationSplits:(bool)arg2;
- (void)processMomentsWithAssets:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
