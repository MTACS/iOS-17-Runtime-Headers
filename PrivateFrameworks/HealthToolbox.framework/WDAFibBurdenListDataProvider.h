
@interface WDAFibBurdenListDataProvider : WDQuantityListDataProvider <HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> {
    HKCalendarCache * _calendarCache;
}

- (void).cxx_destruct;
- (id)_generateFeatureVersionFromUpdateVersion:(id)arg1;
- (id)_timeZoneForSample:(id)arg1;
- (id)featureVersionForSample:(id)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)updateVersionForSample:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
