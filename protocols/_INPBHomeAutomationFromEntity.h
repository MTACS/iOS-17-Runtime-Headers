
@protocol _INPBHomeAutomationFromEntity <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasType;
- (bool)hasValue;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(_INPBString *)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBString *)value;

@end
