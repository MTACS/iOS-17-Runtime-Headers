
@interface _GCDevicePhysicalInputDirectionPadElementParameters : _GCDevicePhysicalInputElementParameters {
    bool  _analog;
    NSSet * _downSources;
    unsigned long long  _eventDownValueField;
    unsigned long long  _eventLeftValueField;
    unsigned long long  _eventRightValueField;
    unsigned long long  _eventUpValueField;
    NSSet * _leftSources;
    NSSet * _rightSources;
    NSSet * _upSources;
    NSSet * _xSources;
    NSSet * _ySources;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
