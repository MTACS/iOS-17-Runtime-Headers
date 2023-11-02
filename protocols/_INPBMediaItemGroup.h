
@protocol _INPBMediaItemGroup <NSObject>

@required

+ (Class)valuesType;

- (void)addValues:(_INPBMediaItemValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (NSArray *)values;
- (_INPBMediaItemValue *)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;

@end
