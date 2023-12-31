
@interface SSADEventReporter : NSObject

+ (void)reportBadDirectivesForModelType:(unsigned long long)arg1;
+ (void)reportBadL2Models;
+ (void)reportBadL3Models;
+ (void)reportKey:(id)arg1;
+ (void)reportModelDeletionForType:(unsigned long long)arg1;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)arg1;

@end
