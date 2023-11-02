
@protocol GCDevicePhysicalInputStateDiff <NSObject>

@required

- (long long)changeForElement:(id <GCPhysicalInputElement>)arg1;
- (NSEnumerator *)changedElements;

@end
