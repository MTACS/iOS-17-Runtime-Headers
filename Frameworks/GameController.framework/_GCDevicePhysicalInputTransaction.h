
@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInputChangedElementsEnumerator * _changedElements;
    double  _lastEventTimestamp;
    _GCDevicePhysicalInput * _physicalInput;
    bool  _updateContextsValid;
}

- (bool)allowsWeakReference;
- (void)dealloc;
- (id)description;
- (bool)isSnapshot;
- (double)lastEventTimestamp;
- (id)physicalInput;

@end
