
@interface HDFitnessMachineCharacteristicUInt24Field : HDFitnessMachineCharacteristicField {
    unsigned int  _value;
}

@property (nonatomic) unsigned int value;

- (void)setValue:(unsigned int)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (unsigned int)value;
- (id)valueAsData;

@end
