
@interface LPTestingOverrides : NSObject

+ (id)additionalAllowedFileURLDirectories;
+ (id)customLoader;
+ (bool)forceEnableAllEntitlements;
+ (bool)forceEnableLockdownMode;
+ (bool)forceIgnoreAllTCCChecks;
+ (unsigned long long)forceImageLoadingScaleFactor;
+ (bool)forceMonospaceFonts;
+ (bool)forceRTL;
+ (id)forceSubsampleImagesToScreenSize;
+ (void)reset;
+ (void)setAdditionalAllowedFileURLDirectories:(id)arg1;
+ (void)setCustomLoader:(id)arg1;
+ (void)setForceEnableAllEntitlements:(bool)arg1;
+ (void)setForceEnableLockdownMode:(bool)arg1;
+ (void)setForceIgnoreAllTCCChecks:(bool)arg1;
+ (void)setForceImageLoadingScaleFactor:(unsigned long long)arg1;
+ (void)setForceMonospaceFonts:(bool)arg1;
+ (void)setForceRTL:(bool)arg1;
+ (void)setForceSubsampleImagesToScreenSize:(id)arg1;

@end
