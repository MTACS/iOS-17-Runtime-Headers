
@interface ICFullDeviceInfo : ICMigrationDeviceInfo {
    struct ICDeviceHardwareInfo { 
        unsigned long long modelName; 
        long long version; 
        long long subVersion; 
    }  _hardwareInfo;
    NSString * _model;
    NSString * _modelDisplayName;
    NSString * _softwareVersion;
}

@property (nonatomic, readonly) struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; } hardwareInfo;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelDisplayName;
@property (nonatomic, readonly) NSString *softwareVersion;

- (void).cxx_destruct;
- (id)description;
- (struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; })hardwareInfo;
- (struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; })hardwareInfoFromModelId:(id)arg1;
- (unsigned long long)hardwareInfoNameFromString:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 softwareVersion:(id)arg4;
- (bool)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; })arg1;
- (bool)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; })arg1;
- (bool)isHardwareInfoUpgradableToMacOS11:(struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; })arg1;
- (bool)isIOSDevice;
- (bool)isOSXDevice;
- (id)loggableDescription;
- (id)model;
- (id)modelDisplayName;
- (bool)shouldBeHidden;
- (id)softwareVersion;
- (bool)upgradable;
- (bool)upgradableToIOS13;
- (bool)upgradableToIOS14orMacOS11;
- (bool)upgraded;
- (bool)upgradedToIOS13;
- (bool)upgradedToIOS14EorMacOS11E;
- (bool)upgradedToMajor:(int)arg1 minor:(int)arg2;

@end
