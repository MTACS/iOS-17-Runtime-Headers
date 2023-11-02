
@protocol MTLModel <NSObject, NSCopying>

@required

+ (id)modelWithDictionary:(NSDictionary *)arg1 error:(id*)arg2;
+ (NSSet *)propertyKeys;

- (NSDictionary *)dictionaryValue;
- (id)initWithDictionary:(NSDictionary *)arg1 error:(id*)arg2;
- (void)mergeValueForKey:(NSString *)arg1 fromModel:(id <MTLModel>)arg2;
- (bool)validate:(id*)arg1;

@end
