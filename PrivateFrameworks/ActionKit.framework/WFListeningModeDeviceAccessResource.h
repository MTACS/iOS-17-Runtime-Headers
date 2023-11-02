
@interface WFListeningModeDeviceAccessResource : WFAccessResource {
    id /* block */  _availabilityCompletion;
    WFBluetoothSettingsClient * _bluetoothClient;
    NSArray * _supportedDevices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _supportedDevicesLock;
}

@property (nonatomic, copy) id /* block */ availabilityCompletion;
@property (nonatomic, readonly) WFBluetoothSettingsClient *bluetoothClient;
@property (nonatomic, readonly) NSArray *supportedDevices;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } supportedDevicesLock;

+ (bool)isSingleton;

- (void).cxx_destruct;
- (id /* block */)availabilityCompletion;
- (id)bluetoothClient;
- (id)initWithDefinition:(id)arg1;
- (id)localizedAccessResourceErrorString;
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)makeSettingsClientIfNecessary;
- (void)setAvailabilityCompletion:(id /* block */)arg1;
- (unsigned long long)status;
- (id)supportedDevices;
- (bool)supportedDevicesAreFetched;
- (struct os_unfair_lock_s { unsigned int x1; })supportedDevicesLock;
- (id)unavailableAccessResourceError;

@end
