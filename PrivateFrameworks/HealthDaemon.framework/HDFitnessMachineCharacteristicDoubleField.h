
@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField {
    bool  _isSigned;
    double  _value;
}

@property (nonatomic) bool isSigned;
@property (nonatomic) double value;

- (bool)isSigned;
- (void)setIsSigned:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (double)value;
- (id)valueAsData;

@end
