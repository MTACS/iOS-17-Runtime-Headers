
@interface HKSortedSampleArray : NSObject <NSFastEnumeration> {
    NSMutableArray * _samples;
    NSMutableDictionary * _samplesByUUID;
    NSSortDescriptor * _sortDescriptor;
}

@property (nonatomic, retain) NSSortDescriptor *sortDescriptor;

- (void).cxx_destruct;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1;
- (id)allSamples;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)init;
- (bool)insertSamples:(id)arg1;
- (void)removeAllSamples;
- (bool)removeSample:(id)arg1;
- (bool)removeSampleAtIndex:(long long)arg1;
- (bool)removeSamplesWithUUIDs:(id)arg1;
- (id)reverseSampleEnumerator;
- (id)sampleAtIndex:(long long)arg1;
- (id)sampleEnumerator;
- (void)setSortDescriptor:(id)arg1;
- (id)sortDescriptor;

@end
