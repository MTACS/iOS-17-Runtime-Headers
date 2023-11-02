
@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying> {
    NSString * _name;
    unsigned long long  _supportedTaskCapabilities;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long supportedTaskCapabilities;

+ (id)bmltDescriptor;
+ (id)cellularDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2;
+ (id)maintenanceWorkDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)retryFailuresDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)taskQueueDescriptor;

- (void).cxx_destruct;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLaunchDaemonActivityDescriptor:(id)arg1;
- (id)name;
- (unsigned long long)supportedTaskCapabilities;

@end
