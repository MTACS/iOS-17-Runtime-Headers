
@protocol _INPBGenericIntentResponse <NSObject>

@required

+ (Class)propertiesType;

- (void)addProperties:(_INPBProperty *)arg1;
- (void)clearProperties;
- (bool)hasMetadata;
- (_INPBIntentMetadata *)metadata;
- (NSArray *)properties;
- (_INPBProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (void)setMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProperties:(NSArray *)arg1;

@end
