
@interface HKMobilityWalkingSteadinessNotificationStatus : NSObject <NSSecureCoding> {
    bool  _fitnessTrackingEnabled;
    bool  _healthNotificationsDisabled;
    long long  _notificationUnavailableReasons;
    long long  _state;
}

@property (nonatomic, readonly) bool fitnessTrackingEnabled;
@property (nonatomic, readonly) bool healthNotificationsDisabled;
@property (nonatomic, readonly) long long notificationUnavailableReasons;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)fitnessTrackingEnabled;
- (unsigned long long)hash;
- (bool)healthNotificationsDisabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 unavailableReasons:(long long)arg2 fitnessTrackingEnabled:(bool)arg3 healthNotificationsDisabled:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (long long)notificationUnavailableReasons;
- (long long)state;

@end
