
@protocol _INPBHomeAttribute <NSObject>

@required

- (int)StringAsAttributeType:(NSString *)arg1;
- (int)attributeType;
- (NSString *)attributeTypeAsString:(int)arg1;
- (_INPBHomeAttributeValue *)attributeValue;
- (bool)hasAttributeType;
- (bool)hasAttributeValue;
- (void)setAttributeType:(int)arg1;
- (void)setAttributeValue:(_INPBHomeAttributeValue *)arg1;
- (void)setHasAttributeType:(bool)arg1;

@end
