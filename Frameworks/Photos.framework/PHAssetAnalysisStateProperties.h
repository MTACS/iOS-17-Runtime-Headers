
@interface PHAssetAnalysisStateProperties : PHAssetPropertySet {
    NSMutableDictionary * _fetchDictionariesByWorkerType;
}

@property (nonatomic, readonly) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (bool)createsPropertySetObjectWithCustomImplementation;
+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3;
- (id)fetchDictionariesByWorkerType;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
