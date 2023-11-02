
@interface HMDHH2MigrationDailyTotalsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _attemptCount;
    unsigned long long  _migrationEventType;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) NSNumber *attemptCount;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long migrationEventType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attemptCount;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initEndWithAutoMigration:(bool)arg1 dryRun:(bool)arg2 attemptCount:(id)arg3 error:(id)arg4;
- (id)initStartWithAutoMigration:(bool)arg1 dryRun:(bool)arg2 attemptCount:(id)arg3;
- (id)initWithMigrationEventType:(unsigned long long)arg1 attemptCount:(id)arg2 error:(id)arg3;
- (unsigned long long)migrationEventType;

@end
