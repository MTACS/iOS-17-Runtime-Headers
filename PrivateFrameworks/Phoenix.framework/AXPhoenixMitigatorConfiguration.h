
@interface AXPhoenixMitigatorConfiguration : NSObject {
    bool  _disableWhenDeviceLocked;
    NSString * _disableWhenDeviceLockedConfigurationKey;
    bool  _disableWhenDisplayOff;
    NSString * _disableWhenDisplayOffConfigurationKey;
}

@property (nonatomic) bool disableWhenDeviceLocked;
@property (nonatomic, retain) NSString *disableWhenDeviceLockedConfigurationKey;
@property (nonatomic) bool disableWhenDisplayOff;
@property (nonatomic, retain) NSString *disableWhenDisplayOffConfigurationKey;

- (void).cxx_destruct;
- (void)_initializeKeys;
- (void)_parseFromDictionary:(id)arg1 missingKeys:(id)arg2;
- (void)_setDefaultConfiguration;
- (bool)disableWhenDeviceLocked;
- (id)disableWhenDeviceLockedConfigurationKey;
- (bool)disableWhenDisplayOff;
- (id)disableWhenDisplayOffConfigurationKey;
- (id)init;
- (id)initWithDictionary:(id)arg1 missingKeys:(id)arg2;
- (void)setDisableWhenDeviceLocked:(bool)arg1;
- (void)setDisableWhenDeviceLockedConfigurationKey:(id)arg1;
- (void)setDisableWhenDisplayOff:(bool)arg1;
- (void)setDisableWhenDisplayOffConfigurationKey:(id)arg1;
- (id)toDictionary;

@end
