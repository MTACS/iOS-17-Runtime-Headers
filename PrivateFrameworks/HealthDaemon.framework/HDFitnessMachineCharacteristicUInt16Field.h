
@interface HDFitnessMachineCharacteristicUInt16Field : HDFitnessMachineCharacteristicField {
    unsigned short  _value;
}

@property (nonatomic) unsigned short value;

- (void)setValue:(unsigned short)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (unsigned short)value;
- (id)valueAsData;

@end
