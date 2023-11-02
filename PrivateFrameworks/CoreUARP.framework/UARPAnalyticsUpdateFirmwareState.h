
@interface UARPAnalyticsUpdateFirmwareState : NSObject {
    UARPAccessoryID * _accessoryID;
    unsigned long long  _analyticsApplyDurationSeconds;
    NSDate * _analyticsApplyDurationStart;
    NSNumber * _analyticsApplyStatus;
    NSNumber * _analyticsApplyUserInitiated;
    UARPAssetID * _assetID;
    NSObject<OS_os_log> * _log;
    unsigned long long  _stagingDurationSeconds;
    NSDate * _stagingDurationStart;
    unsigned long long  _stagingIterations;
    NSNumber * _stagingStatus;
    bool  _stagingUserInitiated;
    NSDate * _startDate;
    long long  _state;
}

@property (readonly) UARPAccessoryID *accessoryID;
@property (readonly) unsigned long long age;
@property (readonly) UARPAssetID *assetID;
@property (readonly) UARPUpdateFirmwareAnalyticsEventFrameworkParams *eventParams;

- (void).cxx_destruct;
- (id)accessoryID;
- (void)accessoryUnreachable;
- (unsigned long long)age;
- (id)assetID;
- (id)description;
- (id)eventParams;
- (id)initWithAccessoryID:(id)arg1 assetID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setState:(long long)arg1;
- (void)stagingCompleteWithStatus:(unsigned long long)arg1;
- (void)stagingInterrupted;
- (void)stagingStartedWithUserIntent:(bool)arg1;
- (void)updateStagingDuration;

@end
