
@interface TAFilterKnownDevices : NSObject

+ (id)removeAndProcessBackgroundDetections:(id)arg1 deviceRecord:(id)arg2;
+ (id)removeDuplicateSuspiciousDevices:(id)arg1;
+ (id)removeIssuedDevices:(id)arg1 deviceRecord:(id)arg2;
+ (id)removeKnownSuspiciousDevices:(id)arg1 deviceRecord:(id)arg2;
+ (id)removeMetricsFromKnownDevices:(id)arg1 deviceRecord:(id)arg2;

@end
