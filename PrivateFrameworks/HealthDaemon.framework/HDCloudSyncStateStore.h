
@interface HDCloudSyncStateStore : NSObject <HDCloudSyncStateStore> {
    unsigned long long  _aggregateMergedDataLength;
    HDStateSyncEntitySchema * _entitySchema;
    NSMutableDictionary * _mergedData;
    HDProfile * _profile;
    HDCloudSyncCachedZone * _zone;
}

@property (nonatomic) unsigned long long aggregateMergedDataLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDStateSyncEntitySchema *entitySchema;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *mergedData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HDCloudSyncCachedZone *zone;

- (void).cxx_destruct;
- (unsigned long long)aggregateMergedDataLength;
- (bool)data:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)entitySchema;
- (id)initWithEntitySchema:(id)arg1 zone:(id)arg2 profile:(id)arg3;
- (id)mergedData;
- (void)setAggregateMergedDataLength:(unsigned long long)arg1;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)unitTest_setMergedData:(id)arg1;
- (id)zone;

@end
