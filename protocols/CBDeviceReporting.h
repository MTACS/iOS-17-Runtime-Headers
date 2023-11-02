
@protocol CBDeviceReporting

@required

- (id /* block */)deviceFoundHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CBDevice *, void*, id, SEL
- (id /* block */)deviceLostHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, CBDevice *, void*, id, SEL
- (NSArray *)discoveredDevices;
- (void)setDeviceFoundHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CBDevice *, void*
- (void)setDeviceLostHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CBDevice *, void*

@end
