
@interface PPSEnergyMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allDeclMetrics;
+ (id)cleanEnergyChargingMetrics;
+ (id)energyAccountingMetrics;
+ (id)subsystem;

@end
