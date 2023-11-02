
@interface PGEventLabelingConfiguration : NSObject {
    void meaningLabels;
    void modelVersion;
    void thresholdsByMeaningLabel;
}

@property (nonatomic, readonly) NSSet *meaningLabels;
@property (nonatomic, readonly) long long modelVersion;

+ (id)bundlePath;
+ (bool)isEventLabelingEnabled;
+ (bool)usePrimaryMeaningDomainForEventLabelingMeanings;

- (void).cxx_destruct;
- (id)init;
- (id)meaningLabels;
- (long long)modelVersion;
- (id)thresholdsBy:(id)arg1;
- (bool)useEventLabelingToInferWithMeaningLabel:(id)arg1;

@end
