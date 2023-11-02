
@interface VCSecurityKeyManager : NSObject {
    id  _delegate;
    NSObject<OS_dispatch_source> * _encryptionKeyRollTimer;
    bool  _forceRemoteMKMMissing;
    bool  _isReceiveKeysCleanUpPending;
    bool  _isRunning;
    bool  _isSendKeysCleanUpPending;
    VCMediaKeyIndex * _keyIndexNotReceived;
    NSObject<OS_dispatch_queue> * _keyManagerQueue;
    double  _keyMaterialNotUsedTimeout;
    double  _lastKeyIndexNotReceived;
    VCMediaKeyIndex * _latestReceiveKeyIndex;
    VCMediaKeyIndex * _latestSendKeyIndex;
    NSMutableDictionary * _prunePendingReceiveKeys;
    NSObject<OS_dispatch_source> * _pruneTimer;
    NSMutableDictionary * _receiveKeys;
    id  _reportingAgentWeak;
    NSMutableDictionary * _sendKeys;
    NSMutableArray * _unknownKeyIndexList;
}

@property (nonatomic) struct opaqueRTCReporting { }*reportingAgent;

- (bool)addSecurityKeyMaterial:(id)arg1;
- (bool)associateMKI:(id)arg1 withClientID:(id)arg2;
- (id)copyMKMWithPrefix:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)firstExpirationTime;
- (id)getLatestRecvKeyMaterial;
- (id)getLatestSendKeyMaterial;
- (long long)getNotUsedTimeout;
- (id)getRecvKeyMaterialWithIndex:(id)arg1;
- (id)getSendKeyMaterialWithIndex:(id)arg1;
- (void)handlePruneTimerEventAndReschedule;
- (id)initWithDelegate:(id)arg1;
- (id)logPrefix;
- (double)pruneAllExpiredKeys;
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;
- (void)releaseTimers;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (void)scheduleEncryptionRollTimerWithDelay:(double)arg1;
- (void)schedulePruneTimer:(double)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)start;
- (bool)startTimers;
- (void)stop;
- (void)stopTimers;

@end
