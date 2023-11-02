
@interface _DPDeviceInfo : NSObject

+ (bool)isDataCollectionEnabled;
+ (bool)isDisabledByTaskingForCrashCopier;
+ (bool)isDisabledByTaskingForDedisco;
+ (bool)isDisabledByTaskingForPrio;
+ (bool)isDisabledByTaskingForTransport:(unsigned long long)arg1;
+ (bool)isInternalBuild;
+ (bool)isRunningUnitTests;
+ (id)osVersion;

@end
