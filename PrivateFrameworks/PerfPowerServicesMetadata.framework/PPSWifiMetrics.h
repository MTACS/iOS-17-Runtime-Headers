
@interface PPSWifiMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allDeclMetrics;
+ (id)awdlStateLoggingCadence;
+ (id)awdlStateMetrics;
+ (id)subsystem;

@end
