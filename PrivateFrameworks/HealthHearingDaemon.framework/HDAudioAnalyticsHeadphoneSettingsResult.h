
@interface HDAudioAnalyticsHeadphoneSettingsResult : NSObject {
    HDAudioAnalyticsHeadphoneSettingsDeviceResult * _activePairedWatch;
    HDAudioAnalyticsHeadphoneSettingsDeviceResult * _localDevice;
}

@property (nonatomic, retain) HDAudioAnalyticsHeadphoneSettingsDeviceResult *activePairedWatch;
@property (nonatomic, retain) HDAudioAnalyticsHeadphoneSettingsDeviceResult *localDevice;

- (void).cxx_destruct;
- (id)activePairedWatch;
- (id)initWithLocalDevice:(id)arg1 activePairedWatch:(id)arg2;
- (id)localDevice;
- (void)setActivePairedWatch:(id)arg1;
- (void)setLocalDevice:(id)arg1;

@end
