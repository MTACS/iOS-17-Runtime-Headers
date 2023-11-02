
@interface PPSStorageMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allDeclMetrics;
+ (id)configMetrics;
+ (id)configurationMetrics;
+ (id)subsystem;
+ (id)timeOffsetMetrics;

@end
