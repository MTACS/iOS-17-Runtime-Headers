
@interface TAFilterLeavingLOI : NSObject

+ (id)filterSuspiciousDeviceWithStore:(id)arg1 leavingLOISettings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
+ (unsigned long long)getLeavingLOIDetectionTypeForLOIType:(unsigned long long)arg1;
+ (unsigned long long)getLeavingLOINotificationImmediacyTypeForLOIType:(unsigned long long)arg1 leavingLOISettings:(id)arg2;
+ (bool)shouldDetectWithStore:(id)arg1 filterLeavingLOISettings:(id)arg2;

@end
