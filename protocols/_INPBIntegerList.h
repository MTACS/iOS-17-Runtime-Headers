
@protocol _INPBIntegerList <NSObject>

@required

+ (Class)dataStringType;

- (void)addDataString:(_INPBInteger *)arg1;
- (void)clearDataStrings;
- (_INPBCondition *)conditionType;
- (_INPBInteger *)dataStringAtIndex:(unsigned long long)arg1;
- (NSArray *)dataStrings;
- (unsigned long long)dataStringsCount;
- (bool)hasConditionType;
- (void)setConditionType:(_INPBCondition *)arg1;
- (void)setDataStrings:(NSArray *)arg1;

@end
