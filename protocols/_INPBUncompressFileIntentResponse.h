
@protocol _INPBUncompressFileIntentResponse <NSObject>

@required

- (_INPBString *)entityName;
- (bool)hasEntityName;
- (bool)hasSuccess;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
