
@interface UABestAppSuggestion : NSObject <NSSecureCoding> {
    NSString * _activityType;
    NSString * _bundleIdentifier;
    double  _confidence;
    NSString * _dynamicIdentifier;
    bool  _isActive;
    NSDate * _lastActiveTime;
    NSDate * _lastUpdateTime;
    NSDictionary * _options;
    NSString * _originatingDeviceIdentifier;
    NSString * _originatingDeviceName;
    NSString * _originatingDeviceType;
    unsigned long long  _type;
    NSUUID * _uniqueIdentifier;
}

@property (copy) NSString *activityType;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) double confidence;
@property (readonly, copy) NSString *dynamicIdentifier;
@property (readonly) bool isActive;
@property (readonly, copy) NSDate *lastActiveTime;
@property (readonly, copy) NSDate *lastUpdateTime;
@property (readonly, copy) NSDictionary *options;
@property (readonly, copy) NSString *originatingDeviceIdentifier;
@property (readonly, copy) NSString *originatingDeviceName;
@property (readonly, copy) NSString *originatingDeviceType;
@property (readonly) unsigned long long type;
@property (copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSString *userActivityTypeIdentifier;
@property (readonly, copy) NSDate *when;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityType;
- (id)bundleIdentifier;
- (double)confidence;
- (id)debugDescription;
- (id)description;
- (id)dynamicIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 lastActiveTime:(id)arg6 type:(unsigned long long)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10 options:(id)arg11 isActive:(bool)arg12;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)lastActiveTime;
- (id)lastUpdateTime;
- (id)options;
- (id)originatingDeviceIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (void)setActivityType:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (unsigned long long)type;
- (id)uniqueIdentifier;
- (id)userActivityTypeIdentifier;
- (id)when;

@end
