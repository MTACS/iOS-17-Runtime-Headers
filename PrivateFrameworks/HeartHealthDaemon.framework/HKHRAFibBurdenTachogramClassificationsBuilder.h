
@interface HKHRAFibBurdenTachogramClassificationsBuilder : NSObject {
    <HKHRAFibBurdenTachogramClassifier> * _classifier;
    NSObject<OS_dispatch_group> * _group;
    NSMutableDictionary * _julianDayToClassifications;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_saveNewClassification:(id)arg1;
- (void)addSampleToClassify:(id)arg1 dayIndex:(long long)arg2;
- (id)buildClassifications;
- (id)buildClassificationsAndWaitForNewClassificationSaves:(bool)arg1;
- (id)classificationForSample:(id)arg1;
- (id)initWithProfile:(id)arg1 classifier:(id)arg2;

@end
