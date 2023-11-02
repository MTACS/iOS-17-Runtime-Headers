
@interface HMDHH2MigrationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _autoMigration;
    NSString * _coreDataValidationAttributeName;
    NSString * _coreDataValidationEntityClassName;
    bool  _dryRun;
    NSString * _failureReason;
    NSString * _localizedErrorDescription;
    long long  _migrationAttempt;
    bool  _migrationSuccessful;
    double  _totalTimeTakenForMigration;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (getter=isAutoMigration, nonatomic, readonly) bool autoMigration;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSString *coreDataValidationAttributeName;
@property (nonatomic, readonly) NSString *coreDataValidationEntityClassName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDryRun, nonatomic, readonly) bool dryRun;
@property (nonatomic, readonly) NSString *failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *localizedErrorDescription;
@property (nonatomic, readonly) long long migrationAttempt;
@property (getter=isMigrationSuccessful, nonatomic, readonly) bool migrationSuccessful;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double totalTimeTakenForMigration;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)coreDataValidationAttributeName;
- (id)coreDataValidationEntityClassName;
- (id)failureReason;
- (id)initWithAutoMigration:(bool)arg1 isDryRun:(bool)arg2 migrationSuccessful:(bool)arg3 totalMigrationTime:(long long)arg4 totalMigrationAttempt:(long long)arg5 migrationError:(id)arg6 failureReason:(id)arg7 coreDataValidationEntityClassName:(id)arg8 coreDataValidationAttributeName:(id)arg9 localizedErrorDescription:(id)arg10;
- (bool)isAutoMigration;
- (bool)isDryRun;
- (bool)isMigrationSuccessful;
- (id)localizedErrorDescription;
- (long long)migrationAttempt;
- (double)totalTimeTakenForMigration;

@end
