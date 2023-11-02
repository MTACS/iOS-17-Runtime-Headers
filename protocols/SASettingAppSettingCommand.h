
@protocol SASettingAppSettingCommand <SAAceSerializable, SAClientBoundCommand>

@required

- (NSString *)appWithSettingsId;
- (NSString *)location;
- (void)setAppWithSettingsId:(NSString *)arg1;
- (void)setLocation:(NSString *)arg1;

@end
