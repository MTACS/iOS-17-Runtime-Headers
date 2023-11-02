
@interface UARPPowerLogAccessory : NSObject {
    NSObject<OS_os_log> * _log;
    NSString * _modelNumber;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reachable;
    NSString * _stagingActiveFirmwareVersion;
    bool  _stagingInProgress;
    NSString * _stagingStagingFirmwareVersion;
    unsigned int  _stagingWindowBytesTransferred;
    unsigned int  _stagingWindowStartOffset;
    bool  _stagingWindowStartOffsetInitialUpdateComplete;
    NSObject<OS_dispatch_source> * _stagingWindowTimer;
    long long  _stagingWindowTimerIntervalNS;
    NSUUID * _uuid;
}

@property (readonly) bool reachable;
@property (readonly) bool stagingInProgress;
@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithModelNumber:(id)arg1 uuid:(id)arg2 stagingWindowPeriodSeconds:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)reachable;
- (void)resetStagingWindowStartOffset;
- (void)setAssetOfferedWithVersion:(id)arg1 activeFirmwareVersion:(id)arg2;
- (void)setReachableWithActiveFirmwareVersion:(id)arg1 stagedFirmwareVersion:(id)arg2;
- (void)setStagingCompleteForStagedFirmareVersion:(id)arg1 activeFirmareVersion:(id)arg2 status:(unsigned long long)arg3;
- (void)setStagingWindowStartOffset:(unsigned int)arg1;
- (void)setUnreachable;
- (bool)stagingInProgress;
- (void)stagingStopped;
- (void)stagingWindowTimeFired;
- (void)startStagingWindowTimer;
- (void)updateStagingProgressWithRequestedOffset:(unsigned int)arg1 requestedLength:(unsigned int)arg2;
- (id)uuid;

@end
