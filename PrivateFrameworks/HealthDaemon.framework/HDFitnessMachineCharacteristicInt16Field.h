
@interface HDFitnessMachineCharacteristicInt16Field : HDFitnessMachineCharacteristicField {
    short  _value;
}

@property (nonatomic) short value;

- (void)setValue:(short)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (short)value;
- (id)valueAsData;

@end
