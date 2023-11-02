
@interface PGHighlightStatisticsEstimator : NSObject {
    NSDictionary * _highlightEstimatesDictionary;
    PGManagerWorkingContext * _workingContext;
}

- (void).cxx_destruct;
- (id)_collectDetailsForAggregations:(id)arg1 inGraph:(id)arg2 curationContext:(id)arg3;
- (id)_collectDetailsForTripsAndWeekends:(id)arg1 inGraph:(id)arg2 curationContext:(id)arg3;
- (id)_createHighlightEstimatesDictionaryWithCurationContext:(id)arg1;
- (id)_highlightEstimatesDescriptionWithData:(id)arg1;
- (bool)_isUtilityAsset:(id)arg1;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1;
- (id)_stringDescriptionForHomeWorkAggregations:(id)arg1;
- (id)_stringDescriptionForMomentsDetails:(id)arg1;
- (id)_stringDescriptionForTripWeekendDetails:(id)arg1;
- (id)highlightEstimatesDescriptionWithCurationContext:(id)arg1;
- (id)highlightEstimatesDictionaryWithCurationContext:(id)arg1;
- (id)initWithWorkingContext:(id)arg1;

@end
