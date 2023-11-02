
@protocol _INPBPaymentMethod <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBPaymentMethodValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBPaymentMethodValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
