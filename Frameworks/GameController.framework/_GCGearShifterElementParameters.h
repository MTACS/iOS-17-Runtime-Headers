
@interface _GCGearShifterElementParameters : _GCDevicePhysicalInputElementParameters {
    unsigned long long  _eventShifterValueField;
    bool  _patternShifter;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _positionRange;
    NSSet * _sources;
}

+ (Class)viewClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
