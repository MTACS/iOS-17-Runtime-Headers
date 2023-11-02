
@interface TPSPairedDeviceValidation : TPSInclusivityValidation {
    NSArray * _cachedDevices;
    NSArray * _cachedPeers;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, copy) NSArray *cachedDevices;
@property (nonatomic, copy) NSArray *cachedPeers;
@property (nonatomic, readonly) NSArray *excludeDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) NSArray *targetDevices;

+ (id)airPodsDeviceInfo;
+ (id)homePodDeviceInfo;
+ (id)watchDeviceInfo;

- (void).cxx_destruct;
- (id)_bluetoothValidationForProductID:(unsigned int)arg1 deviceType:(long long)arg2;
- (id)_bluetoothValidationForTag:(id)arg1 deviceType:(long long)arg2;
- (id)_validationForDeviceNumber:(long long)arg1;
- (id)_validationsForDevices:(id)arg1;
- (id)cachedDevices;
- (id)cachedPeers;
- (id)completionQueue;
- (id)excludeDevices;
- (id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2;
- (void)setCachedDevices:(id)arg1;
- (void)setCachedPeers:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;
- (id)targetDevices;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
