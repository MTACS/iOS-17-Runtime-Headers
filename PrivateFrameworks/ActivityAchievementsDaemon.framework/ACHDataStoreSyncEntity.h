
@interface ACHDataStoreSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)category;
+ (id)dataStoreValueForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2;
+ (int)nanoSyncObjectType;
+ (bool)removeDataStoreValuesForKeys:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setDataStoreValuesWithDictionary:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end
