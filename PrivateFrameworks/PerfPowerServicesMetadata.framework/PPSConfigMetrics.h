
@interface PPSConfigMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allDeclMetrics;
+ (id)configMetrics;
+ (id)consoleModeEnabledMetrics;
+ (id)constructDeviceTypeMetric;
+ (id)deviceCapabilityMetrics;
+ (id)semEnabledMetrics;
+ (id)subsystem;
+ (id)sysdiagnoseEventMetrics;

@end
