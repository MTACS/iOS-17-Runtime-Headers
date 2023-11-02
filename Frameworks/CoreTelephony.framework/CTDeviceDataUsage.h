
@interface CTDeviceDataUsage : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _apps;
    unsigned long long  _periods;
    NSMutableDictionary * _proxiedOnlyApps;
    NSMutableDictionary * _systemServices;
    NSMutableDictionary * _uninstalledApps;
    NSArray * _wifiAssist;
}

@property (retain) NSMutableDictionary *apps;
@property unsigned long long periods;
@property (retain) NSMutableDictionary *proxiedOnlyApps;
@property (retain) NSMutableDictionary *systemServices;
@property (retain) NSMutableDictionary *uninstalledApps;
@property (retain) NSArray *wifiAssist;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appDataUsageForPeriod:(unsigned long long)arg1;
- (id)apps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)periods;
- (id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)proxiedOnlyApps;
- (void)setApps:(id)arg1;
- (void)setPeriods:(unsigned long long)arg1;
- (void)setProxiedOnlyApps:(id)arg1;
- (void)setSystemServices:(id)arg1;
- (void)setUninstalledApps:(id)arg1;
- (void)setWifiAssist:(id)arg1;
- (id)systemServiceDataUsageForPeriod:(unsigned long long)arg1;
- (id)systemServices;
- (id)totalAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalDataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;
- (id)totalDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalSystemServiceDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalWifiAssistUsageForPeriod:(unsigned long long)arg1;
- (id)uninstalledAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)uninstalledApps;
- (id)wifiAssist;

@end
