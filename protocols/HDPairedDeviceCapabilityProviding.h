
@protocol HDPairedDeviceCapabilityProviding

@required

- (NRDevice *)activePairedDevice;
- (bool)isCapabilitySupported:(NSUUID *)arg1 onDevice:(NRDevice *)arg2;
- (NSNumber *)isCapabilitySupportedOnActivePairedDevice:(NSUUID *)arg1 error:(id*)arg2;
- (void)registerObserver:(id <HDPairedDeviceCapabilityProvidingObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)unregisterObserver:(id <HDPairedDeviceCapabilityProvidingObserver>)arg1;

@end
