
@interface DRSDampeningConfiguration : NSObject {
    double  _acceptanceRate;
    unsigned long long  _countCap;
    double  _hysteresis;
}

@property (nonatomic) double acceptanceRate;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double hysteresis;

+ (id)RMEIssueCategoryConfiguration;
+ (id)_entityName;
+ (id)abcDefaultConfiguration;
+ (id)caHitchesConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)watchdogdDefaultConfiguration;

- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 identifier:(id)arg2;
- (id)_initWithMO_ON_MOC_QUEUE:(id)arg1;
- (double)acceptanceRate;
- (unsigned long long)countCap;
- (id)debugDescription;
- (id)description;
- (double)hysteresis;
- (id)initWithHysteresis:(double)arg1 cap:(unsigned long long)arg2 acceptanceRate:(double)arg3;
- (id)initWithPlistDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDampeningConfiguration:(id)arg1;
- (id)jsonCompatibleDictRepresentation;
- (void)setAcceptanceRate:(double)arg1;
- (void)setCountCap:(unsigned long long)arg1;
- (void)setHysteresis:(double)arg1;

@end
