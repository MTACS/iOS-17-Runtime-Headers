
@interface ICCompatibilityController : NSObject {
    NSArray * _fakeDevices;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *fakeDevices;
@property (nonatomic) bool fakesIncompatibleDevicesForDebugging;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)cacheDevices:(id)arg1 forAccount:(id)arg2;
- (id)cachedDevicesDateForAccount:(id)arg1;
- (id)cachedDevicesForAccount:(id)arg1;
- (void)clearCachedDevices;
- (void)devicesForAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fakeDevices;
- (bool)fakesIncompatibleDevicesForDebugging;
- (id)fetchDevicesForAccount:(id)arg1;
- (id)init;
- (void)messageForAccount:(id)arg1 minimumNotesVersion:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)queue;
- (void)setFakesIncompatibleDevicesForDebugging:(bool)arg1;

@end
