
@interface WDSleepStageListDataProvider : WDSampleListDataProvider {
    NSMutableArray * _orderedKeys;
    NSMutableDictionary * _sleepData;
}

@property (nonatomic, readonly) NSMutableArray *orderedKeys;
@property (nonatomic, readonly) NSMutableDictionary *sleepData;

- (void).cxx_destruct;
- (void)_callUpdateHandler;
- (id)_durationFormatter;
- (id)_sleepDataDictionaryFromSamples:(id)arg1;
- (id)_sleepSampleBucketAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (long long)cellStyle;
- (void)deleteAllData;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)orderedKeys;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(bool*)arg3;
- (id)sampleTypes;
- (id)secondaryTextForObject:(id)arg1;
- (id)sleepData;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
