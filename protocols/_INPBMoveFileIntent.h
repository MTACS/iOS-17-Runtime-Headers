
@protocol _INPBMoveFileIntent <NSObject>

@required

+ (Class)entityNameType;
+ (Class)propertiesType;

- (int)StringAsDestinationType:(NSString *)arg1;
- (int)StringAsEntityTypes:(NSString *)arg1;
- (int)StringAsSourceType:(NSString *)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)addEntityType:(int)arg1;
- (void)addProperties:(_INPBFileProperty *)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (void)clearProperties;
- (_INPBString *)destinationName;
- (int)destinationType;
- (NSString *)destinationTypeAsString:(int)arg1;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (NSArray *)entityNames;
- (unsigned long long)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (int*)entityTypes;
- (NSString *)entityTypesAsString:(int)arg1;
- (unsigned long long)entityTypesCount;
- (bool)hasDestinationName;
- (bool)hasDestinationType;
- (bool)hasIntentMetadata;
- (bool)hasSourceName;
- (bool)hasSourceType;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)properties;
- (_INPBFileProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (void)setDestinationName:(_INPBString *)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityNames:(NSArray *)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProperties:(NSArray *)arg1;
- (void)setSourceName:(_INPBString *)arg1;
- (void)setSourceType:(int)arg1;
- (_INPBString *)sourceName;
- (int)sourceType;
- (NSString *)sourceTypeAsString:(int)arg1;

@end
