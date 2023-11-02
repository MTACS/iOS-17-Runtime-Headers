
@protocol MAElement <NSObject>

@required

- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, id, bool*, void*
- (<MAGraphProxy> *)graph;
- (bool)hasProperties;
- (bool)hasProperties:(NSDictionary *)arg1;
- (unsigned long long)identifier;
- (bool)isIdentifiedByProperties:(NSDictionary *)arg1;
- (NSString *)label;
- (unsigned long long)propertiesCount;
- (NSDictionary *)propertyDictionary;
- (id)propertyForKey:(NSString *)arg1;
- (id)propertyForKey:(NSString *)arg1 kindOfClass:(Class)arg2;
- (NSSet *)propertyKeys;
- (NSString *)visualString;
- (float)weight;

@end
