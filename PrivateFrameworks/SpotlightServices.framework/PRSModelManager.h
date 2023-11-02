
@interface PRSModelManager : NSObject {
    unsigned long long  _activeCount;
    bool  _disablePolicy;
    NSString * _experimentId;
    NSString * _modelType;
    NSString * _modelVersion;
    NSMutableDictionary * _models;
    NSMutableDictionary * _otherModels;
    NSString * _otherModelsType;
    bool  _trialEnabled;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic) unsigned long long activeCount;
@property (nonatomic) bool disablePolicy;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, retain) NSString *modelType;
@property (nonatomic, retain) NSString *modelVersion;
@property (nonatomic, retain) NSMutableDictionary *models;
@property (nonatomic, retain) NSMutableDictionary *otherModels;
@property (nonatomic, retain) NSString *otherModelsType;
@property (nonatomic) bool trialEnabled;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id*)arg2 modelName:(id*)arg3;
+ (id)directivesFromFilePath:(id)arg1;
+ (void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id*)arg5;
+ (bool)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;
+ (bool)loadOtherModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;
+ (void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id*)arg3 directivesPath:(id*)arg4;
+ (id)sharedModelManager;

- (void).cxx_destruct;
- (void)activate;
- (unsigned long long)activeCount;
- (float*)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withServerFeatures:(id)arg3 withBundleFeatures:(id)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 shouldCancel:(bool*)arg7 clientBundle:(id)arg8 hasMail:(bool)arg9;
- (float*)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned int)arg5 shouldCancel:(bool*)arg6 filterBundle:(id)arg7;
- (void)deactivate;
- (void)dealloc;
- (bool)disablePolicy;
- (id)experimentId;
- (id)getL2ModelVersionForClientBundle:(id)arg1;
- (id)init;
- (void)loadCannedModelWithType:(unsigned long long)arg1 error:(id*)arg2;
- (bool)loadCannedModels;
- (bool)loadModels;
- (bool)loadOtherModels;
- (id)modelType;
- (id)modelVersion;
- (id)models;
- (id)otherModels;
- (bool)otherModelsAvailable;
- (id)otherModelsType;
- (void)setActiveCount:(unsigned long long)arg1;
- (void)setDisablePolicy:(bool)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setModelType:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setModels:(id)arg1;
- (void)setOtherModels:(id)arg1;
- (void)setOtherModelsType:(id)arg1;
- (void)setTrialEnabled:(bool)arg1;
- (void)setUserDefaults:(id)arg1;
- (double)testL2WithData:(id)arg1 experimental:(bool)arg2;
- (bool)trialEnabled;
- (void)triggerUpdate;
- (void)updateModelsAccordingToHierarchy;
- (void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(bool)arg2 disablePendingUpdates:(bool)arg3;
- (id)userDefaults;

@end
