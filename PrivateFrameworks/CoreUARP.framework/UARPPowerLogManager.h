
@interface UARPPowerLogManager : NSObject {
    NSMutableSet * _accessories;
    NSObject<OS_os_log> * _log;
    NSMutableSet * _pendingReachableEvents;
    unsigned int  _stagingWindowPeriodSeconds;
}

@property unsigned int stagingWindowPeriodSeconds;

- (void).cxx_destruct;
- (bool)accessoryIDSupportsPowerLogging:(id)arg1;
- (void)addAccessoryID:(id)arg1;
- (id)createPowerLogAccessoryForAccessoryID:(id)arg1;
- (id)init;
- (id)pendingReachabilityEventForAccessoryID:(id)arg1;
- (void)postPendingReachabilityEvent:(id)arg1;
- (id)powerLogAccessoryForAccessoryID:(id)arg1;
- (id)powerLogAccessoryForUUID:(id)arg1;
- (void)removeAccessoryID:(id)arg1;
- (void)setAccessoryIDReachable:(id)arg1;
- (void)setAccessoryIDUnreachable:(id)arg1;
- (void)setActiveFirmwareVersionForAccessoryID:(id)arg1 activeFirmwareVersion:(id)arg2;
- (void)setAssetOfferedForAccessoryID:(id)arg1 offeredFirmwareVersion:(id)arg2 activeFirmwareVersion:(id)arg3;
- (void)setStagedFirmwareVersionForAccessoryID:(id)arg1 stagedFirmwareVersion:(id)arg2;
- (void)setStagingCompleteForAccessoryID:(id)arg1 stagedFirmwareVersion:(id)arg2 activeFirmareVersion:(id)arg3 status:(unsigned long long)arg4;
- (void)setStagingWindowPeriodSeconds:(unsigned int)arg1;
- (unsigned int)stagingWindowPeriodSeconds;
- (void)updateStagingProgressForAccessoryID:(id)arg1 requestedOffset:(unsigned int)arg2 requestedLength:(unsigned int)arg3;

@end
