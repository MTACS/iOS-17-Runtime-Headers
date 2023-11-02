
@interface _GCDevicePhysicalInputInitializationContext : NSObject <_GCDevicePhysicalInputViewInitializationContext> {
    _GCDevicePhysicalInputBase * _implementation;
    id  _viewConfiguration;
    id  _viewProperties;
    id  _viewState;
    struct __CFArray { } * _views;
}

@property (readonly) _GCDevicePhysicalInputBase *implementation;

- (void)dealloc;
- (id)implementation;
- (id)init;
- (unsigned long long)view:(id)arg1 allocateObjectSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;
- (unsigned long long)view:(id)arg1 allocatePrimitiveSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;
- (unsigned long long)view:(id)arg1 makeReferenceToView:(id)arg2;
- (id)viewDataSource:(id)arg1;

@end
