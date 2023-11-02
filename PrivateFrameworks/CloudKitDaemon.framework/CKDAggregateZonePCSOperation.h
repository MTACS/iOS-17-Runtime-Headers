
@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation {
    NSError * _currentError;
    bool  _isHandlingRetryableError;
    CKDPCSKeySyncCoreAnalytics * _keySyncAnalytics;
    long long  _maxZoneSaveAttempts;
    long long  _numZoneSaveAttempts;
    NSArray * _sourceZoneIDs;
    CKRecordZone * _targetZone;
    NSMutableDictionary * _zonePCSDataByZoneID;
    CKRecordZoneID * _zoneWaitingOnKeyRegistrySync;
}

@property (retain) NSError *currentError;
@property bool isHandlingRetryableError;
@property (nonatomic, retain) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic, retain) NSArray *sourceZoneIDs;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) CKRecordZone *targetZone;
@property (nonatomic, retain) NSMutableDictionary *zonePCSDataByZoneID;
@property (nonatomic, retain) CKRecordZoneID *zoneWaitingOnKeyRegistrySync;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_fetchPCSDataForZoneID:(id)arg1;
- (void)_fetchZonePCS;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2;
- (void)_prepareTargetZonePCS;
- (bool)_saveTargetZone;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_setPermanentFailure;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (id)activityCreate;
- (id)currentError;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isHandlingRetryableError;
- (id)keySyncAnalytics;
- (void)main;
- (bool)makeStateTransition;
- (long long)maxZoneSaveAttempts;
- (long long)numZoneSaveAttempts;
- (int)operationType;
- (id)relevantZoneIDs;
- (void)setCurrentError:(id)arg1;
- (void)setIsHandlingRetryableError:(bool)arg1;
- (void)setKeySyncAnalytics:(id)arg1;
- (void)setMaxZoneSaveAttempts:(long long)arg1;
- (void)setNumZoneSaveAttempts:(long long)arg1;
- (void)setSourceZoneIDs:(id)arg1;
- (void)setTargetZone:(id)arg1;
- (void)setZonePCSDataByZoneID:(id)arg1;
- (void)setZoneWaitingOnKeyRegistrySync:(id)arg1;
- (id)sourceZoneIDs;
- (id)targetZone;
- (id)zonePCSDataByZoneID;
- (id)zoneWaitingOnKeyRegistrySync;

@end
