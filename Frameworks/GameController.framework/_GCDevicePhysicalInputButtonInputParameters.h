
@interface _GCDevicePhysicalInputButtonInputParameters : _GCDevicePhysicalInputViewParameters {
    bool  _analog;
    float  _pressedThreshold;
    NSSet * _sources;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
