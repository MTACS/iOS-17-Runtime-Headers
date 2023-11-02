
@interface USApplicationUsageReport : NSObject <NSSecureCoding> {
    NSDictionary * _applicationUsageByBundleIdentifier;
    bool  _applicationUsageTrusted;
    NSString * _canonicalBundleIdentifier;
    NSDictionary * _pickupsByBundleIdentifier;
    double  _totalUsageTime;
    NSDictionary * _userNotificationsByBundleIdentifier;
    NSDictionary * _webUsageByDomain;
}

@property (readonly, copy) NSDictionary *applicationUsageByBundleIdentifier;
@property (readonly) double applicationUsageTime;
@property (readonly) bool applicationUsageTrusted;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *canonicalBundleIdentifier;
@property (copy) NSDictionary *pickupsByBundleIdentifier;
@property (readonly) unsigned long long totalPickups;
@property (readonly) double totalUsageTime;
@property (readonly) unsigned long long totalUserNotifications;
@property (copy) NSDictionary *userNotificationsByBundleIdentifier;
@property (readonly, copy) NSDictionary *webUsageByDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)arg1 applicationUsageTrusted:(bool)arg2 totalUsageTime:(double)arg3 applicationUsageByBundleIdentifier:(id)arg4 webUsageByDomain:(id)arg5 userNotificationsByBundleIdentifier:(id)arg6 pickupsByBundleIdentifier:(id)arg7;
- (id)applicationUsageByBundleIdentifier;
- (double)applicationUsageTime;
- (bool)applicationUsageTrusted;
- (id)bundleIdentifier;
- (id)canonicalBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (id)initWithCanonicalBundleIdentifier:(id)arg1 applicationUsageTrusted:(bool)arg2 totalUsageTime:(double)arg3 applicationUsageByBundleIdentifier:(id)arg4 webUsageByDomain:(id)arg5 userNotificationsByBundleIdentifier:(id)arg6 pickupsByBundleIdentifier:(id)arg7;
- (id)initWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)pickupsByBundleIdentifier;
- (void)setPickupsByBundleIdentifier:(id)arg1;
- (void)setUserNotificationsByBundleIdentifier:(id)arg1;
- (unsigned long long)totalPickups;
- (double)totalUsageTime;
- (unsigned long long)totalUserNotifications;
- (id)userNotificationsByBundleIdentifier;
- (id)webUsageByDomain;

@end
