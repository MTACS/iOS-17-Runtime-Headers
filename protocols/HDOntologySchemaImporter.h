
@protocol HDOntologySchemaImporter <NSObject>

@required

+ (bool)canImportEntry:(HKOntologyShardRegistryEntry *)arg1;
+ (bool)importOntologyShardEntry:(HKOntologyShardRegistryEntry *)arg1 shardRegistry:(HDOntologyShardRegistry *)arg2 error:(id*)arg3;
+ (NSArray *)pruneEntries:(NSArray *)arg1 options:(unsigned long long)arg2 shardRegistry:(HDOntologyShardRegistry *)arg3 error:(id*)arg4;
+ (NSArray *)willPruneEntries:(NSArray *)arg1 options:(unsigned long long)arg2 shardRegistry:(HDOntologyShardRegistry *)arg3 error:(id*)arg4;

@optional

+ (long long)purgeSpaceForUrgency:(int)arg1 shardRegistry:(HDOntologyShardRegistry *)arg2;
+ (long long)purgeableSpaceForUrgency:(int)arg1 shardRegistry:(HDOntologyShardRegistry *)arg2;

@end
