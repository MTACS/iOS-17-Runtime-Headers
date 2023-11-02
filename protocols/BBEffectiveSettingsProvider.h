
@protocol BBEffectiveSettingsProvider <NSObject>

@required

- (long long)effectiveGlobalAnnounceSetting;
- (long long)effectiveGlobalContentPreviewSetting;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (bool)hasPairedVehiclesForCarPlay;

@end
