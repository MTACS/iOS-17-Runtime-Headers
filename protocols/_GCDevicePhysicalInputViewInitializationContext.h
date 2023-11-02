
@protocol _GCDevicePhysicalInputViewInitializationContext

@required

- (_GCDevicePhysicalInputBase *)implementation;
- (unsigned long long)view:(_GCDevicePhysicalInputView *)arg1 allocateObjectSlot:(unsigned char)arg2 withCopyOfValueFromView:(_GCDevicePhysicalInputView *)arg3 slot:(unsigned long long)arg4;
- (unsigned long long)view:(_GCDevicePhysicalInputView *)arg1 allocatePrimitiveSlot:(unsigned char)arg2 withCopyOfValueFromView:(_GCDevicePhysicalInputView *)arg3 slot:(unsigned long long)arg4;
- (unsigned long long)view:(_GCDevicePhysicalInputView *)arg1 makeReferenceToView:(_GCDevicePhysicalInputView *)arg2;
- (<_GCDevicePhysicalInputViewDataSource> *)viewDataSource:(_GCDevicePhysicalInputView *)arg1;

@end
