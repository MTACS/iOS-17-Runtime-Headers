
@interface PGEventLabelingConfigurationWrapper : NSObject {
    PGEventLabelingConfiguration * _configuration;
}

+ (bool)isEventLabelingEnabled;
+ (bool)usePrimaryMeaningDomainForEventLabelingMeanings;

- (void).cxx_destruct;
- (double)highPrecisionThresholdForMeaningLabel:(id)arg1;
- (double)highRecallThresholdForMeaningLabel:(id)arg1;
- (id)init;
- (id)meaningLabelsForEventLabeling;

@end
