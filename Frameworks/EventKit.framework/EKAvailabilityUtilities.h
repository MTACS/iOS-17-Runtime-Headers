
@interface EKAvailabilityUtilities : NSObject

+ (int)CALFreeBusyTypeFromEKAvailType:(long long)arg1;
+ (long long)availabilityPanelVisibilityForEvent:(id)arg1;
+ (bool)canSeeAttendeeStatusesForEvent:(id)arg1;
+ (id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2;
+ (id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3;
+ (int)leastAvailabileFreeBusyTypeForArray:(id)arg1;
+ (long long)orderForType:(long long)arg1;
+ (bool)showTypeAsBusy:(long long)arg1;
+ (bool)showTypeAsUnavailable:(long long)arg1;
+ (bool)spansIncludeBusyPeriod:(id)arg1;
+ (long long)summarizedAvailabilityTypeForSpans:(id)arg1;

@end
