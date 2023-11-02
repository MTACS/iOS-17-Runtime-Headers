
@protocol _INPBFileProperty <NSObject>

@required

- (int)StringAsName:(NSString *)arg1;
- (int)StringAsQualifier:(NSString *)arg1;
- (bool)hasName;
- (bool)hasQualifier;
- (bool)hasValue;
- (int)name;
- (NSString *)nameAsString:(int)arg1;
- (int)qualifier;
- (NSString *)qualifierAsString:(int)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasQualifier:(bool)arg1;
- (void)setName:(int)arg1;
- (void)setQualifier:(int)arg1;
- (void)setValue:(_INPBFilePropertyValue *)arg1;
- (_INPBFilePropertyValue *)value;

@end
