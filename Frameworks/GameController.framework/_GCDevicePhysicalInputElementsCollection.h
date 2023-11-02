
@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase * _implementation;
}

- (bool)allowsWeakReference;
- (unsigned long long)count;
- (id)elementAtIndex:(unsigned long long)arg1;
- (id)elementForAlias:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
