
@interface DRSTaskingDecisionMaker : NSObject {
    DRSTaskingCloudKitHelper * _cloudKitHelper;
    DRSConfigPersistedStore * _configStore;
    NSDate * _currentReceivedDate;
    NSString * _dbWorkingDirectoryPath;
    NSTimeZone * _deviceTimezone;
    bool  _enforceBuild;
    bool  _enforceDate;
    bool  _enforceGlobalHysteresisAndCap;
    bool  _enforceSampling;
    bool  _enforceTeamHysteresis;
    DRSTaskingLimitingParameters * _limitingParameters;
}

@property (nonatomic, readonly) DRSTaskingCloudKitHelper *cloudKitHelper;
@property (nonatomic, readonly) DRSConfigPersistedStore *configStore;
@property (nonatomic, retain) NSDate *currentReceivedDate;
@property (nonatomic, readonly) NSString *dbWorkingDirectoryPath;
@property (nonatomic, readonly) NSTimeZone *deviceTimezone;
@property (nonatomic, readonly) bool enforceBuild;
@property (nonatomic, readonly) bool enforceDate;
@property (nonatomic, readonly) bool enforceGlobalHysteresisAndCap;
@property (nonatomic, readonly) bool enforceSampling;
@property (nonatomic, readonly) bool enforceTeamHysteresis;
@property (nonatomic, readonly) DRSTaskingLimitingParameters *limitingParameters;

+ (bool)passesPercentAccept:(double)arg1;

- (void).cxx_destruct;
- (bool)_configDoesPassTeamHysteresis:(id)arg1 logTelemetry:(bool)arg2;
- (id)_configsPassingOverallHysteresis:(id)arg1 logTelemetry:(bool)arg2;
- (id)_configsPassingPerTeamHysteresis:(id)arg1 logTelemetry:(bool)arg2;
- (id)_configsPassingSampling:(id)arg1 logTelemetry:(bool)arg2;
- (id)_hysteresisPredicate:(id)arg1;
- (id)_hysteresisPredicate:(id)arg1 config:(id)arg2;
- (void)_logConfigReceipt:(id)arg1;
- (void)_persistReceivedMetadata:(id)arg1;
- (void)_rejectTaskingMessageDueToDisabledState:(id)arg1 logTelemetry:(bool)arg2;
- (id)_teamTaskingsPassingBuild:(id)arg1 logTelemetry:(bool)arg2 allowWildcardBuild:(bool)arg3;
- (id)_teamTaskingsPassingDate:(id)arg1 logTelemetry:(bool)arg2;
- (id)acceptedCancels:(id)arg1;
- (id)acceptedConfigs:(id)arg1 logTelemetry:(bool)arg2;
- (id)acceptedConfigs:(id)arg1 logTelemetry:(bool)arg2 allowWildcardBuild:(bool)arg3;
- (void)clientCompletedConfigUUID:(id)arg1;
- (void)clientRejectsConfigUUID:(id)arg1;
- (id)cloudKitHelper;
- (id)configStore;
- (id)currentReceivedDate;
- (id)dbWorkingDirectoryPath;
- (id)deviceTimezone;
- (bool)enforceBuild;
- (bool)enforceDate;
- (bool)enforceGlobalHysteresisAndCap;
- (bool)enforceSampling;
- (bool)enforceTeamHysteresis;
- (id)initWithTimezone:(id)arg1 limitingParameters:(id)arg2 dbWorkingDirectoryPath:(id)arg3 cloudKitHelper:(id)arg4 enforceDate:(bool)arg5 enforceBuild:(bool)arg6 enforceSampling:(bool)arg7 enforceTeamHysteresis:(bool)arg8 enforceGlobalHysteresisAndCap:(bool)arg9 errorOut:(id*)arg10;
- (bool)isEqual:(id)arg1;
- (id)limitingParameters;
- (bool)reportToDecisionServer;
- (void)setCurrentReceivedDate:(id)arg1;

@end
