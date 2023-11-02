
@protocol _INPBMoveFileIntentResponse <NSObject>

@required

+ (Class)entityNameType;

- (int)StringAsEntityTypes:(NSString *)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (_INPBString *)destinationName;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (NSArray *)entityNames;
- (unsigned long long)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (int*)entityTypes;
- (NSString *)entityTypesAsString:(int)arg1;
- (unsigned long long)entityTypesCount;
- (bool)hasDestinationName;
- (bool)hasOverwrite;
- (bool)hasSourceName;
- (bool)hasSuccess;
- (bool)overwrite;
- (void)setDestinationName:(_INPBString *)arg1;
- (void)setEntityNames:(NSArray *)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasOverwrite:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setOverwrite:(bool)arg1;
- (void)setSourceName:(_INPBString *)arg1;
- (void)setSuccess:(bool)arg1;
- (_INPBString *)sourceName;
- (bool)success;

@end
