
@interface _GCDevicePhysicalInputSwitchElementParameters : _GCDevicePhysicalInputElementParameters {
    bool  _canWrap;
    unsigned long long  _eventPositionField;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _positionRange;
    bool  _sequential;
    NSSet * _sources;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
