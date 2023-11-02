
@interface _GCDevicePhysicalInputButtonElementParameters : _GCDevicePhysicalInputElementParameters {
    bool  _analog;
    unsigned long long  _eventPressedValueField;
    float  _pressedThreshold;
    NSSet * _sources;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
