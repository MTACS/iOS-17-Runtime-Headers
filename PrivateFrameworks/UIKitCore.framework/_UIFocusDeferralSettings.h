
@interface _UIFocusDeferralSettings : PTSettings {
    double  _userEngagementTimeoutInSeconds;
}

@property (nonatomic) double userEngagementTimeoutInSeconds;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setUserEngagementTimeoutInSeconds:(double)arg1;
- (double)userEngagementTimeoutInSeconds;

@end
