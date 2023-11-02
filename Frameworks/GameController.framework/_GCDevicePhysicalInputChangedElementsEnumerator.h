
@interface _GCDevicePhysicalInputChangedElementsEnumerator : NSEnumerator {
    unsigned long long  _currentIndex;
    _GCDevicePhysicalInputTransaction * _implementation;
}

- (id)nextObject;
- (oneway void)release;
- (id)retain;

@end
