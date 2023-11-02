
@interface BYChronicle : NSObject {
    NSMutableDictionary * _featureEntries;
}

@property (nonatomic, retain) NSMutableDictionary *featureEntries;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2;
- (id)dictionaryRepresentation;
- (id)entryForFeature:(unsigned long long)arg1;
- (id)featureEntries;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)recordFeatureShown:(unsigned long long)arg1;
- (void)setFeatureEntries:(id)arg1;

@end
