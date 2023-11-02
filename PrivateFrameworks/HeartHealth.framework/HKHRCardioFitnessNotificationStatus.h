
@interface HKHRCardioFitnessNotificationStatus : NSObject <NSSecureCoding> {
    long long  _notificationUnavailableReasons;
    long long  _state;
    bool  _wristDetectEnabled;
}

@property (nonatomic, readonly) long long notificationUnavailableReasons;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) bool wristDetectEnabled;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 unavailableReasons:(long long)arg2 wristDetectEnabled:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (long long)notificationUnavailableReasons;
- (long long)state;
- (bool)wristDetectEnabled;

@end
