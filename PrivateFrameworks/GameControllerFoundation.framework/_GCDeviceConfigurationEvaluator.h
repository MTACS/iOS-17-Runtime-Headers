
@interface _GCDeviceConfigurationEvaluator : NSObject {
    NSSet * _configurationsIN;
    NSDictionary * _deviceManagersIN;
    NSDictionary * _deviceOwnersOUT;
    NSDictionary * _physicalDevicesIN;
    NSSet * _viableConfigurationsOUT;
}

@property (nonatomic, copy) NSSet *configurationsIN;
@property (nonatomic, copy) NSDictionary *deviceManagersIN;
@property (nonatomic, readonly) NSDictionary *deviceOwnersOUT;
@property (nonatomic, copy) NSDictionary *physicalDevicesIN;
@property (nonatomic, readonly) NSSet *viableConfigurationsOUT;

- (void).cxx_destruct;
- (id)configurationsIN;
- (id)deviceManagersIN;
- (id)deviceOwnersOUT;
- (void)evaluate;
- (id)physicalDevicesIN;
- (void)setConfigurationsIN:(id)arg1;
- (void)setDeviceManagersIN:(id)arg1;
- (void)setPhysicalDevicesIN:(id)arg1;
- (unsigned long long)viableConfigurations:(id*)arg1 deviceOwners:(id*)arg2;
- (id)viableConfigurationsOUT;

@end
