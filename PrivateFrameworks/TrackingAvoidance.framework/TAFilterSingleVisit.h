
@interface TAFilterSingleVisit : NSObject

+ (id)filterSuspiciousDeviceWithStore:(id)arg1 singleVisitSettings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
+ (unsigned long long)getSingleVisitDetectionTypeForLOIType:(unsigned long long)arg1;
+ (unsigned long long)getSingleVisitNotificationImmediacyTypeForLOIType:(unsigned long long)arg1 singleVisitSettings:(id)arg2;
+ (bool)shouldDetectWithStore:(id)arg1 filterSingleVisitSettings:(id)arg2;

@end
