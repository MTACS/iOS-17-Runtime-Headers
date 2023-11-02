
@interface ACHTemplateEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_insertTemplate:(id)arg1 provenance:(long long)arg2 syncIdentity:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)_insertTemplates:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 profile:(id)arg4 databaseContext:(id)arg5 error:(id*)arg6;
+ (bool)_journalTemplates:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 action:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)_removeTemplateWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_templateWithUniqueName:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)allTemplatesWithProfile:(id)arg1 error:(id*)arg2;
+ (id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (int)currentSyncVersion;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (bool)insertTemplates:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 profile:(id)arg4 databaseContext:(id)arg5 error:(id*)arg6;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)removeTemplates:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)setSyncedTemplatesObserver:(id)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (struct { int x1; int x2; })supportedSyncVersionRange;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (struct { int x1; int x2; })syncVersionRangeForSession:(id)arg1;
+ (id)syncedTemplatesObserver;

@end
