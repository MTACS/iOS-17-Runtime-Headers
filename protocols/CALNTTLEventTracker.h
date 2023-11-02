
@protocol CALNTTLEventTracker

@required

- (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(bool)arg3 isOnSharedCalendar:(bool)arg4;
- (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(bool)arg3 isOnSharedCalendar:(bool)arg4;
- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(bool)arg5 isOnSharedCalendar:(bool)arg6;

@end
