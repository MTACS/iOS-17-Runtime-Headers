
@interface HDCloudSyncStateDoseEventUpdater : NSObject {
    NSString * _domain;
    NSString * _key;
    struct { 
        int minimum; 
        int current; 
    }  _supportedSyncVersionRange;
    NSDateInterval * _timeWindow;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic) struct { int x1; int x2; } supportedSyncVersionRange;
@property (nonatomic, retain) NSDateInterval *timeWindow;

+ (id)_codableSyncStateFromExistingSyncState:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
+ (bool)_fetchPersistedDeletedSamples:(id*)arg1 withSampleUUIDs:(id)arg2 transaction:(id)arg3 timeWindow:(id)arg4 error:(id*)arg5;
+ (bool)_fetchPersistedDoseEvents:(id*)arg1 transaction:(id)arg2 timeWindow:(id)arg3 error:(id*)arg4;
+ (id)_flattenCodableCollectionByProvenance:(id)arg1;
+ (bool)_generateSyncCodableContributors:(id*)arg1 fromCollectionByProvenance:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)_generateSyncCodableDevices:(id*)arg1 fromCollectionByProvenance:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)_persistSampleOriginsFromCodableCollection:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_sampleType;
+ (id)_sampleUUIDsFromCodableCollection:(id)arg1;

- (void).cxx_destruct;
- (long long)_decodeCloudData:(id)arg1 ofClass:(Class)arg2 forKey:(id)arg3 version:(long long)arg4 codableSyncState:(id*)arg5 codableCollection:(id*)arg6 error:(id*)arg7;
- (long long)_decodeData:(id)arg1 forKey:(id)arg2 decodedCodableSyncState:(id*)arg3 error:(id*)arg4;
- (id)_healthObjectUUIDsFromMergedStateSyncCollection:(id)arg1;
- (id)_orderCollectionsByOldestCreationDate:(id)arg1;
- (id)_orderDeletedCollectionsByOldestCreationDate:(id)arg1;
- (id)domain;
- (id)initWithDomain:(id)arg1 key:(id)arg2 timeWindow:(id)arg3;
- (id)key;
- (void)setSupportedSyncVersionRange:(struct { int x1; int x2; })arg1;
- (void)setTimeWindow:(id)arg1;
- (struct { int x1; int x2; })supportedSyncVersionRange;
- (id)timeWindow;
- (bool)updateDataWithStateStorage:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
