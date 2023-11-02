
@protocol _GCDevicePhysicalInputViewDataSource <NSObject>

@required

- (id)view:(_GCDevicePhysicalInputView *)arg1 objectValueForSlot:(unsigned long long*)arg2;
- (unsigned long long)view:(_GCDevicePhysicalInputView *)arg1 primitiveValueForSlot:(unsigned long long*)arg2;
- (void)view:(_GCDevicePhysicalInputView *)arg1 setObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (void)view:(_GCDevicePhysicalInputView *)arg1 setPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (bool)view:(_GCDevicePhysicalInputView *)arg1 testAndSetObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (bool)view:(_GCDevicePhysicalInputView *)arg1 testAndSetPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (_GCDevicePhysicalInputView *)view:(_GCDevicePhysicalInputView *)arg1 viewForSlot:(unsigned long long*)arg2;

@end
