
@interface HMDCameraRecordingMetricUUIDUtilities : HMFObject

+ (id)UUIDRotationSalt;
+ (id)currentEphemeralUUIDWithUUID:(id)arg1 rotationScheduleDays:(unsigned long long)arg2;
+ (id)ephemeralUUIDWithUUID:(id)arg1 forTimestamp:(unsigned long long)arg2 rotationSchedule:(unsigned long long)arg3;
+ (id)ephemeralUUIDWithUUID:(id)arg1 forTimestamp:(unsigned long long)arg2 rotationScheduleDays:(unsigned long long)arg3;

@end
