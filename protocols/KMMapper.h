
@protocol KMMapper <NSObject>

@required

+ (Class)externalObjectClass;

- (NSArray *)itemsFromExternalObject:(NSObject *)arg1 additionalFields:(NSDictionary *)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
