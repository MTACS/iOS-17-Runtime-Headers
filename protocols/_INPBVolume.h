
@protocol _INPBVolume <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBVolumeValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBVolumeValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
