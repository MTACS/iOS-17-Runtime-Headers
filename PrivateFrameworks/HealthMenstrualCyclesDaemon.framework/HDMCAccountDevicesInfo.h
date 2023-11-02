
@interface HDMCAccountDevicesInfo : NSObject <NSCopying> {
    NSArray * _healthAppDevicesInfo;
    HDMCDeviceInfo * _localDeviceInfo;
}

@property (nonatomic, readonly) bool hasHealthAppDevicesWithHigherAlgorithmVersions;
@property (nonatomic, readonly) bool localDeviceIsOnlyDeviceWithNotifications;
@property (nonatomic, readonly) bool shouldFireNotifications;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasHealthAppDevicesWithHigherAlgorithmVersions;
- (unsigned long long)hash;
- (id)initWithHealthAppDevicesInfo:(id)arg1 localDeviceInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)localDeviceIsOnlyDeviceWithNotifications;
- (bool)shouldFireNotifications;

@end
