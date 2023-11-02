
@protocol _INPBOpenFileIntent <NSObject>

@required

+ (Class)propertiesType;

- (int)StringAsEntityType:(NSString *)arg1;
- (int)StringAsScope:(NSString *)arg1;
- (void)addProperties:(_INPBFileProperty *)arg1;
- (_INPBString *)appId;
- (void)clearProperties;
- (_INPBString *)entityName;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (bool)hasAppId;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasScope;
- (bool)hasScopeEntityName;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)properties;
- (_INPBFileProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (int)scope;
- (NSString *)scopeAsString:(int)arg1;
- (_INPBString *)scopeEntityName;
- (void)setAppId:(_INPBString *)arg1;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasScope:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProperties:(NSArray *)arg1;
- (void)setScope:(int)arg1;
- (void)setScopeEntityName:(_INPBString *)arg1;

@end
