
@interface SSTrialManager : NSObject {
    NSDictionary * _cachedValuesForFactor;
    NSString * _client;
    int  _experimentDeploymentId;
    NSString * _experimentId;
    bool  _hasActiveExperiment;
    bool  _hasOverride;
    bool  _hasRollout;
    NSString * _namespaceId;
    NSString * _namespaceName;
    int  _rolloutDeploymentId;
    NSString * _rolloutId;
    NSString * _treatmentId;
    TRIClient * _trialClient;
    bool  _wasLoadedSinceLaunch;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) int experimentDeploymentId;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic, readonly) NSString *namespaceId;
@property (nonatomic, readonly) int rolloutDeploymentId;
@property (nonatomic, readonly) NSString *rolloutId;
@property (nonatomic, readonly) NSString *treatmentId;
@property (nonatomic) bool wasLoadedSinceLaunch;

+ (id)currentTrialManagerForClient:(id)arg1;
+ (bool)didAllNamespacesLoadForClient:(id)arg1;
+ (id)getTTRLogsForClient:(id)arg1;
+ (bool)isValidNamespace:(unsigned int)arg1 forClient:(id)arg2;
+ (id)resolveMultipleSpotlightExperiments;
+ (void)setTrialOverridePath;
+ (void)setTrialUpdateHandler:(id /* block */)arg1;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightMailTrialManager;
+ (id)sharedSpotlightModelTrialManager;
+ (id)sharedSpotlightPolicyTrialManager;
+ (id)sharedSpotlightRankingTrialManager;
+ (id)sharedSpotlightTrialClient;
+ (id)sharedSpotlightUITrialManager;

- (void).cxx_destruct;
- (id)client;
- (id)description;
- (int)experimentDeploymentId;
- (id)experimentId;
- (id)getFactorDictionary;
- (id)getLevelForFactor:(id)arg1;
- (bool)hasActiveExperiment;
- (bool)hasActiveRollout;
- (bool)hasOverride;
- (id)initWithNameSpace:(unsigned int)arg1 forClient:(id)arg2;
- (void)loadWithUpdateHandler:(id /* block */)arg1;
- (id)namespaceId;
- (void)refreshTrackingId;
- (int)rolloutDeploymentId;
- (id)rolloutId;
- (void)setWasLoadedSinceLaunch:(bool)arg1;
- (id)treatmentId;
- (bool)wasLoadedSinceLaunch;

@end
