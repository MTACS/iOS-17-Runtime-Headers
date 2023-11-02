
@interface PKExperiment : NSObject {
    bool  _isExposed;
    TRIClient * _trialClient;
}

@property (nonatomic, readonly) bool isExposed;

- (void).cxx_destruct;
- (bool)booleanForFactor:(id)arg1;
- (id)description;
- (id)experimentDetails;
- (id)filePathForFactor:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1;
- (bool)isExposed;
- (bool)isTaggedForFactor:(id)arg1;
- (id)levelForFactor:(id)arg1;
- (id)metadataForFactor:(id)arg1;
- (id)namespaceName;
- (void)refresh;
- (id)stringForFactor:(id)arg1;
- (void)trackExperimentExposure;

@end
