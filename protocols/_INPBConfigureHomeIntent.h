
@protocol _INPBConfigureHomeIntent <NSObject>

@required

+ (Class)entitiesType;

- (void)addEntities:(_INPBHomeEntity *)arg1;
- (void)clearEntities;
- (NSArray *)entities;
- (_INPBHomeEntity *)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setEntities:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
