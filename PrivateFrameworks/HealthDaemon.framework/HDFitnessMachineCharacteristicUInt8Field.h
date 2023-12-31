
@interface HDFitnessMachineCharacteristicUInt8Field : HDFitnessMachineCharacteristicField {
    unsigned char  _value;
}

@property (nonatomic) unsigned char value;

- (void)setValue:(unsigned char)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (unsigned char)value;
- (id)valueAsData;

@end
