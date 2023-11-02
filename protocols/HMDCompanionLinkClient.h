
@protocol HMDCompanionLinkClient <NSObject>

@required

- (id /* block */)deviceChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, RPCompanionLinkDevice *, unsigned int, void*, id, SEL
- (id /* block */)deviceFoundHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, RPCompanionLinkDevice *, void*, id, SEL
- (id /* block */)deviceLostHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, RPCompanionLinkDevice *, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDeviceChangedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, unsigned int, void*
- (void)setDeviceFoundHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, void*
- (void)setDeviceLostHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, void*
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)start;
- (void)stop;

@end
