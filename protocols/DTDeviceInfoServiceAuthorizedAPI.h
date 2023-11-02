
@protocol DTDeviceInfoServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSData *)createSignatureFromLibraryUUID:(NSUUID *)arg1 sharedCacheUUID:(NSUUID *)arg2 andPath:(NSString *)arg3;
- (NSData *)deepSymbolOwnerSignatureForPid:(NSNumber *)arg1 uuid:(NSUUID *)arg2;
- (NSArray *)directoryListingForPath:(NSString *)arg1;
- (void)enableExpiredPidTracking:(NSNumber *)arg1;
- (NSString *)execnameForPid:(NSNumber *)arg1;
- (NSDictionary *)hardwareInformation;
- (NSDictionary *)iconDescriptionFileForAppPath:(NSString *)arg1;
- (NSNumber *)isRunningPid:(NSNumber *)arg1;
- (NSData *)kpepDatabase;
- (NSString *)machKernelName;
- (NSArray *)machTimeInfo;
- (NSString *)nameForGID:(NSNumber *)arg1;
- (NSString *)nameForUID:(NSNumber *)arg1;
- (NSDictionary *)networkInformation;
- (NSDictionary *)runningProcessWithPid:(NSNumber *)arg1;
- (NSArray *)runningProcesses;
- (NSData *)symbolicatorSignatureForPid:(NSNumber *)arg1 trackingSelector:(NSString *)arg2;
- (NSDictionary *)symbolicatorSignaturesForExpiredPids;
- (NSSet *)sysmonCoalitionAttributes;
- (NSSet *)sysmonProcessAttributes;
- (NSSet *)sysmonSystemAttributes;
- (NSString *)traceCodesFile;
- (void)unregisterSignatureTrackingForPid:(NSNumber *)arg1;

@end
