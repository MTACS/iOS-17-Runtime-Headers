
@interface LCFFeatureStore : NSObject {
    LCFBiomeManager * _biomeManagerLabeledDataStore;
    LCFDatabaseConnection * _dbFeatureStore;
    NSString * _featureStoreKey;
    bool  _useSqlite;
}

@property (nonatomic, readonly) LCFBiomeManager *biomeManagerLabeledDataStore;
@property (nonatomic, readonly) LCFDatabaseConnection *dbFeatureStore;
@property (nonatomic, readonly) NSString *featureStoreKey;
@property (nonatomic, readonly) bool useSqlite;

- (void).cxx_destruct;
- (id)biomeManagerLabeledDataStore;
- (id)dbFeatureStore;
- (id)featureProviderFromfeatureSet:(id)arg1 featureNames:(id)arg2;
- (id)featureStoreKey;
- (id)getFeatureSets:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 option:(unsigned long long)arg4;
- (id)getFeatureVector:(id)arg1 atTime:(id)arg2 option:(unsigned long long)arg3;
- (id)getFeatureVector:(id)arg1 option:(unsigned long long)arg2;
- (id)getFeatureVectorTimestamps;
- (id)getFeatureVectorWithStoreEvents:(id)arg1 storeEventsInReversedOrder:(id)arg2 option:(unsigned long long)arg3;
- (id)getFeatureVectors:(id)arg1 option:(unsigned long long)arg2;
- (id)getFeatureVectors:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 option:(unsigned long long)arg4;
- (id)getMultiArrayFeatureVectors:(id)arg1 vectorName:(id)arg2 srcLabelName:(id)arg3 destLabelName:(id)arg4 option:(unsigned long long)arg5;
- (id)getMultiArrayFeatureVectors:(id)arg1 vectorName:(id)arg2 srcLabelName:(id)arg3 destLabelName:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 option:(unsigned long long)arg7;
- (id)init:(id)arg1 url:(id)arg2 useSqlite:(bool)arg3;
- (bool)pruneFrom:(id)arg1 endDate:(id)arg2 option:(unsigned long long)arg3;
- (bool)updateFeatureSet:(id)arg1;
- (bool)updateFeatureSet:(id)arg1 featureVestion:(id)arg2 featureValues:(id)arg3;
- (bool)useSqlite;

@end
