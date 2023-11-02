
@protocol _INPBCopyFileIntentResponse <NSObject>

@required

- (int)StringAsEntityType:(NSString *)arg1;
- (_INPBString *)destinationName;
- (_INPBString *)entityName;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (bool)hasDestinationName;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasOverwrite;
- (bool)hasSuccess;
- (bool)overwrite;
- (void)setDestinationName:(_INPBString *)arg1;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasOverwrite:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setOverwrite:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
