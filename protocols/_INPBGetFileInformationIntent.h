
@protocol _INPBGetFileInformationIntent <NSObject>

@required

- (int)StringAsEntityType:(NSString *)arg1;
- (int)StringAsPropertyName:(NSString *)arg1;
- (int)StringAsQualifier:(NSString *)arg1;
- (_INPBString *)entityName;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasPropertyName;
- (bool)hasQualifier;
- (_INPBIntentMetadata *)intentMetadata;
- (int)propertyName;
- (NSString *)propertyNameAsString:(int)arg1;
- (int)qualifier;
- (NSString *)qualifierAsString:(int)arg1;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasPropertyName:(bool)arg1;
- (void)setHasQualifier:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPropertyName:(int)arg1;
- (void)setQualifier:(int)arg1;

@end
