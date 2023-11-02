
@protocol _INPBCurrencyAmount <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBCurrencyAmountValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBCurrencyAmountValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
