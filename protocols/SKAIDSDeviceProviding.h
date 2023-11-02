
@protocol SKAIDSDeviceProviding <NSObject>

@required

- (NSArray *)idsDevices;
- (NSUUID *)registerIDSDeviceChangedObserver:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)unregisterIDSDeviceChangedObserver:(NSUUID *)arg1;

@end
