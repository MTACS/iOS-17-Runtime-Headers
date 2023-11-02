
@interface APOdmlAssetManager : NSObject {
    APOdmlFeatureStorage * _featureStorage;
    NSCache * _modelCache;
    APOdmlUnfairLock * _modelCacheLock;
    TRIClient * _trialClient;
    TRIExperimentIdentifiers * _trialIdentifiers;
    NSString * _trialNamespace;
}

@property (nonatomic, readonly) int deploymentID;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic, retain) APOdmlFeatureStorage *featureStorage;
@property (nonatomic, readonly) NSCache *modelCache;
@property (nonatomic, readonly) APOdmlUnfairLock *modelCacheLock;
@property (nonatomic, readonly) NSString *odmlNamespace;
@property (nonatomic, readonly) int odmlVersion;
@property (nonatomic, readonly) NSString *treatmentID;
@property (nonatomic, readonly) TRIClient *trialClient;
@property (nonatomic, readonly) TRIExperimentIdentifiers *trialIdentifiers;
@property (nonatomic, readonly) NSString *trialNamespace;

- (void).cxx_destruct;
- (id)booleanValueForFactor:(id)arg1;
- (id)currentMLModel;
- (void)deleteExpiredFeaturesForName:(id)arg1;
- (int)deploymentID;
- (id)doubleValueForFactor:(id)arg1;
- (id)experimentID;
- (id)featureForName:(id)arg1;
- (id)featureStorage;
- (id)initWithNamespace:(id)arg1 andClient:(id)arg2;
- (id)longValueForFactor:(id)arg1;
- (id)modelCache;
- (id)modelCacheLock;
- (id)odmlNamespace;
- (int)odmlVersion;
- (id)pathForFactor:(id)arg1 isDirectory:(bool)arg2;
- (id)saveFeatureFromObject:(id)arg1 withName:(id)arg2;
- (void)setFeatureStorage:(id)arg1;
- (id)stringValueForFactor:(id)arg1;
- (id)treatmentID;
- (id)trialClient;
- (id)trialIdentifiers;
- (id)trialNamespace;

@end
