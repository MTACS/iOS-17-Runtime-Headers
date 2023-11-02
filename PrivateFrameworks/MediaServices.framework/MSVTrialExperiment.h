
@interface MSVTrialExperiment : NSObject {
    TRIExperimentIdentifiers * _identifiers;
    bool  _identifiersFetched;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _namespaceName;
    TRIClient * _trialClient;
}

@property (nonatomic, readonly) NSString *deploymentID;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic, readonly) NSString *treatmentID;

- (void).cxx_destruct;
- (bool)boolForFactor:(id)arg1;
- (id)deploymentID;
- (id)description;
- (double)doubleForFactor:(id)arg1;
- (id)experimentID;
- (id)identifiers;
- (id)initWithProjectID:(long long)arg1 namespaceName:(id)arg2;
- (void)invalidate;
- (long long)longForFactor:(id)arg1;
- (id)metadataForFactor:(id)arg1;
- (void)refresh;
- (id)stringForFactor:(id)arg1;
- (id)treatmentID;

@end
