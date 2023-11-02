
@interface TAFilterVisits : NSObject

+ (id)filterSuspiciousDeviceWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
+ (id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
+ (id)getAddressSetInTAVisitSnapshot:(id)arg1;
+ (id)getEntryAddressSetInTAVisitSnapshot:(id)arg1 usingSettings:(id)arg2;
+ (id)getExitAddressSetInTAVisitSnapshot:(id)arg1 usingSettings:(id)arg2;
+ (id)getIntersectionOfFirstSet:(id)arg1 andSecondSet:(id)arg2;
+ (id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)arg1 toVisitSnapshot:(id)arg2 settings:(id)arg3 currentClockTime:(id)arg4;
+ (id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)arg1 toVisitSnapshot:(id)arg2 settings:(id)arg3 currentClockTime:(id)arg4 skipFreshObservationCheck:(bool)arg5;
+ (unsigned long long)identifyDetectionTypeWithStore:(id)arg1 settings:(id)arg2;
+ (bool)isReasonableSpeedOfTravelFrom:(id)arg1 to:(id)arg2;
+ (bool)sensitiveVisitsTooCloseBetweenFromLOIType:(unsigned long long)arg1 toLOIType:(unsigned long long)arg2 distance:(double)arg3 settings:(id)arg4;
+ (bool)shouldDetectWithStore:(id)arg1 settings:(id)arg2;

@end
