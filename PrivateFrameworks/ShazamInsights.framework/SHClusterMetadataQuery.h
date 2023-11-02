
@interface SHClusterMetadataQuery : NSObject

+ (long long)dataStoreTypeFromString:(id)arg1;
+ (id)dateFormatter;
+ (id)metadataFromDatabaseAtLocation:(id)arg1 error:(id*)arg2;
+ (id)stringFromStoreType:(long long)arg1;
+ (bool)writeMetadata:(id)arg1 toDatabaseAtLocation:(id)arg2 error:(id*)arg3;

@end
