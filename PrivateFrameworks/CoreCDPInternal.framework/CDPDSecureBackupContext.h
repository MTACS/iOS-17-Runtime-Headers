
@interface CDPDSecureBackupContext : NSObject {
    CDPDCircleJoinResult * _circleJoinResult;
    CDPDevice * _device;
    NSString * _localSecret;
    unsigned long long  _localSecretType;
    bool  _nonViableRequiresRepair;
    bool  _octagonCapableRecordsExist;
    NSString * _preRecordUUID;
    NSString * _recoveryKey;
    NSString * _recoverySecret;
    bool  _silentRecovery;
    bool  _synchronous;
    NSString * _telemetryDeviceSessionID;
    NSString * _telemetryFlowID;
    bool  _usePreviouslyCachedRecoveryKey;
    bool  _usePreviouslyCachedSecret;
}

@property (nonatomic, retain) CDPDCircleJoinResult *circleJoinResult;
@property (nonatomic, copy) CDPDevice *device;
@property (nonatomic, copy) NSString *localSecret;
@property (nonatomic) unsigned long long localSecretType;
@property (nonatomic) bool nonViableRequiresRepair;
@property (nonatomic) bool octagonCapableRecordsExist;
@property (nonatomic, retain) NSString *preRecordUUID;
@property (nonatomic, copy) NSString *recoveryKey;
@property (nonatomic, copy) NSString *recoverySecret;
@property (nonatomic) bool silentRecovery;
@property (nonatomic) bool synchronous;
@property (nonatomic, copy) NSString *telemetryDeviceSessionID;
@property (nonatomic, copy) NSString *telemetryFlowID;
@property (nonatomic) bool usePreviouslyCachedRecoveryKey;
@property (nonatomic) bool usePreviouslyCachedSecret;

- (void).cxx_destruct;
- (id)circleJoinResult;
- (id)description;
- (id)device;
- (id)localSecret;
- (unsigned long long)localSecretType;
- (bool)nonViableRequiresRepair;
- (bool)octagonCapableRecordsExist;
- (id)preRecordUUID;
- (id)recoveryKey;
- (id)recoverySecret;
- (void)setCircleJoinResult:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setLocalSecret:(id)arg1;
- (void)setLocalSecretType:(unsigned long long)arg1;
- (void)setNonViableRequiresRepair:(bool)arg1;
- (void)setOctagonCapableRecordsExist:(bool)arg1;
- (void)setPreRecordUUID:(id)arg1;
- (void)setRecoveryKey:(id)arg1;
- (void)setRecoverySecret:(id)arg1;
- (void)setSilentRecovery:(bool)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setTelemetryDeviceSessionID:(id)arg1;
- (void)setTelemetryFlowID:(id)arg1;
- (void)setUsePreviouslyCachedRecoveryKey:(bool)arg1;
- (void)setUsePreviouslyCachedSecret:(bool)arg1;
- (bool)silentRecovery;
- (bool)synchronous;
- (id)telemetryDeviceSessionID;
- (id)telemetryFlowID;
- (bool)usePreviouslyCachedRecoveryKey;
- (bool)usePreviouslyCachedSecret;

@end
