
@interface HMDHH2AutoMigrationEligibilityStatusLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _currentBuildStartedOnHH1;
    HMDHH2AutoMigrationEligibilityResult * _currentUserAutoMigrationEligibilityResult;
    HMDHH2AutoMigrationEligibilityResult * _currentUserMigrationByOwnerAutoEligibilityResult;
    HMDHH2AutoMigrationEligibilityResult * _currentUserMigrationByOwnerManualEligibilityResult;
    bool  _didRunMigrationTaskOnCurrentBuild;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly) bool currentBuildStartedOnHH1;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserAutoMigrationEligibilityResult;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerAutoEligibilityResult;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerManualEligibilityResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didRunMigrationTaskOnCurrentBuild;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)currentBuildStartedOnHH1;
- (id)currentUserAutoMigrationEligibilityResult;
- (id)currentUserMigrationByOwnerAutoEligibilityResult;
- (id)currentUserMigrationByOwnerManualEligibilityResult;
- (bool)didRunMigrationTaskOnCurrentBuild;
- (id)initWithAutoMigrationEligibilityResult:(id)arg1 migrationByOwnerManualEligibilityResult:(id)arg2 migrationByOwnerAutoEligibilityResult:(id)arg3 didRunMigrationTaskOnCurrentBuild:(bool)arg4 currentBuildStartedOnHH1:(bool)arg5;

@end
