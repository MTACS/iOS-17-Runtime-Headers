
@interface PGSensitiveLocationBlocklistConfiguration : PGConfiguration {
    double  _latitude;
    double  _longitude;
    double  _radius;
    NSArray * _sensitiveDateIntervals;
}

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) NSArray *sensitiveDateIntervals;

+ (id)dateFormatter;
+ (bool)dateInterval:(id)arg1 intersectsSensitiveDateIntervals:(id)arg2;
+ (bool)isAssetAtSensitiveLocationAndDate:(id)arg1;
+ (bool)isSensitiveLocation:(id)arg1 duringDateInterval:(id)arg2;
+ (id)obfuscatedBlocklistFromUnobfuscatedBlocklist:(id)arg1;
+ (id)resolveConfigurationDictionary:(id)arg1;
+ (id)sensitiveLocationBlocklist;
+ (id)sensitiveLocationBlocklistConfigurations;
+ (id)sensitiveLocationBlocklistConfigurationsLocal;
+ (id)sensitiveLocationBlocklistLocal;
+ (id)unobfuscatedBlocklistFromObfuscatedBlocklist:(id)arg1;

- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)radius;
- (id)sensitiveDateIntervals;

@end
