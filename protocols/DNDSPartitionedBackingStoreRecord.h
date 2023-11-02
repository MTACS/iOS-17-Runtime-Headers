
@protocol DNDSPartitionedBackingStoreRecord <DNDSBackingStoreRecord>

@required

+ (id)newWithDictionaryRepresentation:(NSDictionary *)arg1 partitionedDictionaryRepresentation:(NSDictionary *)arg2 context:(DNDSBackingStoreDictionaryContext *)arg3;

@end
