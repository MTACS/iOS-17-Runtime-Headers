
@interface PPSXPCMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allDeclMetrics;
+ (id)groupActivitiesMetrics;
+ (id)subsystem;
+ (id)vkDataScannerMetrics;

@end
