
@interface _DKObjectMOConverter : NSObject {
    NSCache * _cache;
    bool  _deduplicateValues;
    NSArray * _excludedMetadataKeys;
    bool  _readMetadata;
}

@property bool deduplicateValues;
@property (retain) NSArray *excludedMetadataKeys;
@property bool readMetadata;

- (void).cxx_destruct;
- (id)dataIntervalsFromManagedObjects:(id)arg1;
- (bool)deduplicateValues;
- (id)excludedMetadataKeys;
- (id)init;
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)objectsFromManagedObjects:(id)arg1;
- (bool)readMetadata;
- (void)setDeduplicateValues:(bool)arg1;
- (void)setExcludedMetadataKeys:(id)arg1;
- (void)setReadMetadata:(bool)arg1;

@end
