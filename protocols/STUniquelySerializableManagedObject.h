
@protocol STUniquelySerializableManagedObject <STSerializableManagedObject>

@required

+ (id)fetchOrCreateWithDictionaryRepresentation:(NSDictionary *)arg1 inContext:(NSManagedObjectContext *)arg2 error:(id*)arg3;

@end
