
@protocol _INPBHomeUserTask <NSObject>

@required

- (int)StringAsAttribute:(NSString *)arg1;
- (int)StringAsTaskType:(NSString *)arg1;
- (int)attribute;
- (NSString *)attributeAsString:(int)arg1;
- (bool)hasAttribute;
- (bool)hasTaskType;
- (bool)hasValue;
- (void)setAttribute:(int)arg1;
- (void)setHasAttribute:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setTaskType:(int)arg1;
- (void)setValue:(_INPBHomeAttributeValue *)arg1;
- (int)taskType;
- (NSString *)taskTypeAsString:(int)arg1;
- (_INPBHomeAttributeValue *)value;

@end
