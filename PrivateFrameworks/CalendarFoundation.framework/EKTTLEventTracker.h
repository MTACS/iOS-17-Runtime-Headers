
@interface EKTTLEventTracker : NSObject

+ (id)_valueForAlertType:(unsigned long long)arg1;
+ (id)_valueForETAType:(unsigned long long)arg1;
+ (id)_valueForTransportType:(unsigned long long)arg1;
+ (id)_valueForTravelState:(unsigned long long)arg1;
+ (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(bool)arg3 isOnSharedCalendar:(bool)arg4;
+ (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(bool)arg3 isOnSharedCalendar:(bool)arg4;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(bool)arg5 isOnSharedCalendar:(bool)arg6;
+ (void)trackTTLCandidateEventHasSuggestedLocation:(bool)arg1 isOnSharedCalendar:(bool)arg2;

@end
