
@interface PXSharedLibraryLegacyDevicesFallbackMonitor : PXObservable {
    NSArray * _devices;
    long long  _state;
}

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) long long state;

+ (id)legacyDevicesFallbackMonitorIfEnabledWithSharedLibraryOrPreviewPresent:(bool)arg1;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateLegacyDevices:(id)arg1 error:(id)arg2;
- (id)devices;
- (id)init;
- (void)setDevices:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
