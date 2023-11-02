
@interface HDNanoRegistryDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    id /* block */  _activePairedDeviceProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_isListeningForUpdates;
    NRDevice * _lock_lastActivePairedDevice;
    HKObserverSet * _observers;
    int  _pairedDeviceDidChangeCapabilitiesNotificationToken;
}

- (void).cxx_destruct;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (id)activePairedDevice;
- (void)dealloc;
- (id)init;
- (id)initWithActivePairedDeviceProvider:(id /* block */)arg1;
- (bool)isCapabilitySupported:(id)arg1 onDevice:(id)arg2;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
