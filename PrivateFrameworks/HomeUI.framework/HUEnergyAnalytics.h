
@interface HUEnergyAnalytics : NSObject

+ (unsigned long long)getUTFAnalyticsEventTypeFrom:(unsigned long long)arg1;
+ (void)saveTapEvent:(unsigned long long)arg1 withInteractionType:(unsigned long long)arg2;
+ (void)saveViewAccessedFromURLEvent:(unsigned long long)arg1 deepLinkFrom:(id)arg2;
+ (void)saveViewDurationEvent:(unsigned long long)arg1 withDuration:(id)arg2;
+ (void)saveViewDurationEvent:(unsigned long long)arg1 withDuration:(id)arg2 withUserHasAccessories:(bool)arg3;
+ (void)saveViewVisitEvent:(unsigned long long)arg1;
+ (void)saveViewVisitEvent:(unsigned long long)arg1 withData:(id)arg2;
+ (void)saveViewVisitEvent:(unsigned long long)arg1 withState:(unsigned long long)arg2;
+ (void)saveWidgetSettingsEvent:(unsigned long long)arg1 withLocation:(unsigned long long)arg2;
+ (void)sendEnergyWindowsToUTFFromData:(id)arg1;
+ (void)sendToUTFWithData:(id)arg1 withSubsystem:(id)arg2 withCategory:(id)arg3;

@end
