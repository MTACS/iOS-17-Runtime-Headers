
@protocol _INPBUncompressFileIntent <NSObject>

@required

- (int)StringAsEntityType:(NSString *)arg1;
- (_INPBString *)entityName;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
