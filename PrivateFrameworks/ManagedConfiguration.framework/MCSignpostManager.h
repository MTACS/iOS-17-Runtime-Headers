
@interface MCSignpostManager : NSObject

+ (id)signpostsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 duration:(double)arg3 error:(id*)arg4;
+ (void)willGetFeature:(id)arg1;
+ (void)willPostEffectiveSettingsChangedNotification;
+ (void)willSetFeature:(id)arg1;

@end
