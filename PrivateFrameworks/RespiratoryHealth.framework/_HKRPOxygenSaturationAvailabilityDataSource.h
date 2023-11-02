
@interface _HKRPOxygenSaturationAvailabilityDataSource : NSObject <HKRPOxygenSaturationAvailabilityDataSource> {
    NRDevice * _device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceIsSupported;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool skipHardwareCheck;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)deviceIsSupported;
- (id)initWithDevice:(id)arg1;
- (bool)skipHardwareCheck;

@end
