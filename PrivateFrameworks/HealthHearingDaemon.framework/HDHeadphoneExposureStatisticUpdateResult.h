
@interface HDHeadphoneExposureStatisticUpdateResult : NSObject {
    bool  _canTriggerNotification;
    bool  _includedSeries;
}

@property (nonatomic, readonly) bool canTriggerNotification;
@property (nonatomic, readonly) bool includedSeries;

+ (id)_resultWithIncludedSeries:(bool)arg1 canTriggerNotification:(bool)arg2;
+ (id)_resultWithIncludedSeries:(bool)arg1 samples:(id)arg2;
+ (id)resultForAggregation;
+ (id)resultForEmptySamplesAdded;
+ (id)resultForSamplesAdded:(id)arg1 includedSeries:(bool)arg2;
+ (id)resultForSamplesJournaled:(id)arg1;

- (id)_initWithIncludedSeries:(bool)arg1 canTriggerNotification:(bool)arg2;
- (bool)canTriggerNotification;
- (void)combineWithResult:(id)arg1;
- (bool)includedSeries;

@end
