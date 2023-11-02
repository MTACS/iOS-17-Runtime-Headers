
@interface HDOntologyManifestImporter : NSObject <HDOntologySchemaImporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canImportEntry:(id)arg1;
+ (bool)importManifestWithEntry:(id)arg1 updateCoordinator:(id)arg2 error:(id*)arg3;
+ (bool)importOntologyShardEntry:(id)arg1 shardRegistry:(id)arg2 error:(id*)arg3;
+ (id)pruneEntries:(id)arg1 options:(unsigned long long)arg2 shardRegistry:(id)arg3 error:(id*)arg4;
+ (id)willPruneEntries:(id)arg1 options:(unsigned long long)arg2 shardRegistry:(id)arg3 error:(id*)arg4;

- (id)init;

@end
