
@interface AVTAvatarConfigurationMetric : NSObject <AVTAvatarConfigurationMetric>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultMetric;
+ (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
+ (unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;
+ (void)enumerateDifferencesFromConfiguration:(id)arg1 toConfiguration:(id)arg2 withHandler:(id /* block */)arg3;
+ (long long)gapFromDistance:(unsigned long long)arg1;
+ (long long)impactForSettingKind:(struct { long long x1; long long x2; })arg1;

- (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
- (unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;
- (long long)gapFromDistance:(unsigned long long)arg1;

@end
