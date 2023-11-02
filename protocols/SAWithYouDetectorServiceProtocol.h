
@protocol SAWithYouDetectorServiceProtocol

@required

- (void)addClient:(id <SAWithYouDetectorClientProtocol>)arg1;
- (void)forceUpdateWithYouStatus;
- (void)forceUpdateWithYouStatusToFindDevices:(NSArray *)arg1 withContext:(unsigned long long)arg2;
- (void)forceUpdateWithYouStatusWithShortScan:(bool)arg1;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)pausePeriodicScan;
- (void)removeClient:(id <SAWithYouDetectorClientProtocol>)arg1;
- (void)resetAllWithYouStatusAndScanStates;
- (void)resumePeriodicScan;
- (unsigned long long)statusForDeviceWithUUID:(NSUUID *)arg1;

@end
