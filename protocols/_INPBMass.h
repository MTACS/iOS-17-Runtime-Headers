
@protocol _INPBMass <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBMassValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBMassValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
