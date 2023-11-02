
@interface _GCSteeringWheelElementParameters : _GCDevicePhysicalInputElementParameters {
    unsigned long long  _eventRotationValueField;
    float  _maximumDegreesOfRotation;
    NSSet * _sources;
}

+ (Class)viewClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
