
@interface ACHBackCompatLegacyAchievementKeyValueSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)category;
+ (int)nanoSyncObjectType;
+ (bool)setLegacyDataStoreValuesWithDictionary:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end
