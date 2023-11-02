
@protocol _INPBGetFileInformationIntentResponse <NSObject>

@required

- (_INPBString *)entityName;
- (bool)hasEntityName;
- (bool)hasProperty;
- (bool)hasSuccess;
- (_INPBFileProperty *)property;
- (void)setEntityName:(_INPBString *)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setProperty:(_INPBFileProperty *)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
