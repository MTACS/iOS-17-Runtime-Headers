
@protocol GCDevicePhysicalInput <GCDevicePhysicalInputState>

@required

- (<GCDevicePhysicalInputState> *)capture;
- (<GCDevice> *)device;
- (id /* block */)elementValueDidChangeHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, <GCDevicePhysicalInput> *, <GCPhysicalInputElement> *, void*, id, SEL
- (id /* block */)inputStateAvailableHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <GCDevicePhysicalInput> *, void*, id, SEL
- (long long)inputStateQueueDepth;
- (<GCDevicePhysicalInputState><GCDevicePhysicalInputStateDiff> *)nextInputState;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setElementValueDidChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCDevicePhysicalInput> *, <GCPhysicalInputElement> *, void*
- (void)setInputStateAvailableHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCDevicePhysicalInput> *, void*
- (void)setInputStateQueueDepth:(long long)arg1;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
