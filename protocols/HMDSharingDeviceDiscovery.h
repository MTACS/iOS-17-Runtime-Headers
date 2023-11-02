
@protocol HMDSharingDeviceDiscovery <NSObject>

@required

- (id /* block */)deviceChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, SFDevice *, unsigned int, void*, id, SEL
- (id /* block */)deviceFoundHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SFDevice *, void*, id, SEL
- (id /* block */)deviceLostHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SFDevice *, void*, id, SEL
- (unsigned long long)discoveryFlags;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)repairDevice:(void *)arg1 flags:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SFDevice *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDeviceChangedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFDevice *, unsigned int, void*
- (void)setDeviceFoundHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFDevice *, void*
- (void)setDeviceLostHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFDevice *, void*
- (void)setDiscoveryFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)start;
- (void)stop;

@end
