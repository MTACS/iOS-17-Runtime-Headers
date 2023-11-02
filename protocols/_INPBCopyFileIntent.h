
@protocol _INPBCopyFileIntent <NSObject>

@required

+ (Class)propertiesType;

- (int)StringAsDestinationType:(NSString *)arg1;
- (int)StringAsEntityType:(NSString *)arg1;
- (int)StringAsSourceType:(NSString *)arg1;
- (void)addProperties:(_INPBFileProperty *)arg1;
- (void)clearProperties;
- (_INPBString *)destinationName;
- (int)destinationType;
- (NSString *)destinationTypeAsString:(int)arg1;
- (_INPBString *)entityName;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (bool)hasDestinationName;
- (bool)hasDestinationType;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasSourceName;
- (bool)hasSourceType;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)properties;
- (_INPBFileProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (void)setDestinationName:(_INPBString *)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProperties:(NSArray *)arg1;
- (void)setSourceName:(_INPBString *)arg1;
- (void)setSourceType:(int)arg1;
- (_INPBString *)sourceName;
- (int)sourceType;
- (NSString *)sourceTypeAsString:(int)arg1;

@end
