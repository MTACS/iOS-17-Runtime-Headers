
@interface CALNTimeToLeaveEventTrackerUtilities : NSObject

+ (void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 hasSuggestedLocation:(bool)arg3 isOnSharedCalendar:(bool)arg4;
+ (void)trackEmailEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 hasSuggestedLocation:(bool)arg3 isOnSharedCalendar:(bool)arg4;
+ (unsigned long long)ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2;
+ (id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1;
+ (unsigned long long)ttlEventTrackerETATypeForHypothesis:(id)arg1;
+ (unsigned long long)ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1;
+ (unsigned long long)ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1;

@end
