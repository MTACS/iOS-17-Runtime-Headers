
@protocol CATSharingDiscoveryPrimitives <CATSharingPrimitives>

@required

- (id /* block */)deviceFoundHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CATSharingDevice *, void*, id, SEL
- (id /* block */)deviceLostHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CATSharingDevice *, void*, id, SEL
- (<CATSharingDeviceSession> *)sessionForDevice:(CATSharingDevice *)arg1;
- (void)setDeviceFoundHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CATSharingDevice *, void*
- (void)setDeviceLostHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CATSharingDevice *, void*

@end
