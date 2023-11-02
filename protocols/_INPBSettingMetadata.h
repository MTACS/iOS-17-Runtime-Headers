
@protocol _INPBSettingMetadata <NSObject>

@required

- (bool)hasSettingId;
- (bool)hasTargetApp;
- (bool)hasTargetDevice;
- (void)setSettingId:(NSString *)arg1;
- (void)setTargetApp:(_INPBAppIdentifier *)arg1;
- (void)setTargetDevice:(_INPBDevice *)arg1;
- (NSString *)settingId;
- (_INPBAppIdentifier *)targetApp;
- (_INPBDevice *)targetDevice;

@end
