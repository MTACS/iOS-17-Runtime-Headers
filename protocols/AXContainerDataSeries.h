
@protocol AXContainerDataSeries <NSObject>

@required

- (NSString *)_accessibilityDataSeriesName;
- (long long)_accessibilityDataSeriesType;
- (NSArray *)_accessibilityDataSeriesValuesForAxis:(long long)arg1;

@optional

- (NSArray *)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (bool)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (NSNumber *)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (NSNumber *)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (double)_accessibilityDataSeriesSonificationDuration;
- (bool)_accessibilityDataSeriesSupportsSonification;
- (bool)_accessibilityDataSeriesSupportsSummarization;
- (NSString *)_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (NSString *)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;
- (NSString *)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (void)_accessibilityDidChangeSonificationPlaybackPosition:(double)arg1;

@end
