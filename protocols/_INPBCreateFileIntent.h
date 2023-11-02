
@protocol _INPBCreateFileIntent <NSObject>

@required

- (int)StringAsDestinationType:(NSString *)arg1;
- (int)StringAsEntityType:(NSString *)arg1;
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
- (_INPBIntentMetadata *)intentMetadata;
- (void)setDestinationName:(_INPBString *)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
