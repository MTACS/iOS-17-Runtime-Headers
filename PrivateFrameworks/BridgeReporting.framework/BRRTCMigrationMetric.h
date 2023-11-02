
@interface BRRTCMigrationMetric : NSObject <BRRTCMetric> {
    BRRTCMigrationMetricDeviceDetails * _deviceDetails;
    bool  _isAutomation;
    NSString * _migrationBeganTime;
    bool  _migrationDeviceUnpairedBecauseKeychainIsOff;
    bool  _migrationDeviceUnpairedBecauseStale;
    bool  _migrationFailedBTKeysNotSynced;
    NSNumber * _migrationFailureCode;
    NSString * _migrationFailureDescription;
    NSString * _migrationFailureDomain;
    bool  _migrationSucceeded;
    unsigned short  _rtcType;
    NSString * _sessionID;
    NSString * _suspectTransaction;
    NSMutableDictionary * _transactionPhases;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BRRTCMigrationMetricDeviceDetails *deviceDetails;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAutomation;
@property (nonatomic, retain) NSString *migrationBeganTime;
@property (nonatomic) bool migrationDeviceUnpairedBecauseKeychainIsOff;
@property (nonatomic) bool migrationDeviceUnpairedBecauseStale;
@property (nonatomic) bool migrationFailedBTKeysNotSynced;
@property (nonatomic, retain) NSNumber *migrationFailureCode;
@property (nonatomic, retain) NSString *migrationFailureDescription;
@property (nonatomic, retain) NSString *migrationFailureDomain;
@property (nonatomic) bool migrationSucceeded;
@property (nonatomic) unsigned short rtcType;
@property (nonatomic, retain) NSString *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *suspectTransaction;
@property (nonatomic, retain) NSMutableDictionary *transactionPhases;

- (void).cxx_destruct;
- (id)deviceDetails;
- (id)dictionaryRepresentation;
- (id)init;
- (bool)isAutomation;
- (id)migrationBeganTime;
- (bool)migrationDeviceUnpairedBecauseKeychainIsOff;
- (bool)migrationDeviceUnpairedBecauseStale;
- (bool)migrationFailedBTKeysNotSynced;
- (id)migrationFailureCode;
- (id)migrationFailureDescription;
- (id)migrationFailureDomain;
- (bool)migrationSucceeded;
- (unsigned short)rtcType;
- (id)sessionID;
- (void)setDeviceDetails:(id)arg1;
- (void)setIsAutomation:(bool)arg1;
- (void)setMigrationBeganTime:(id)arg1;
- (void)setMigrationDeviceUnpairedBecauseKeychainIsOff:(bool)arg1;
- (void)setMigrationDeviceUnpairedBecauseStale:(bool)arg1;
- (void)setMigrationFailedBTKeysNotSynced:(bool)arg1;
- (void)setMigrationFailureCode:(id)arg1;
- (void)setMigrationFailureDescription:(id)arg1;
- (void)setMigrationFailureDomain:(id)arg1;
- (void)setMigrationSucceeded:(bool)arg1;
- (void)setRtcType:(unsigned short)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSuspectTransaction:(id)arg1;
- (void)setTransactionPhases:(id)arg1;
- (id)suspectTransaction;
- (id)transactionPhases;

@end
