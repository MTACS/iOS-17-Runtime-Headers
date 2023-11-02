
@interface PSGWordBoundarySuggestionsExpConfig : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol> {
    NSString * _espressoBinFilePath;
    TRIExperimentIdentifiers * _experimentIdentifiers;
    NSString * _inferenceModelConfigPath;
    NSString * _inferenceModelDescription;
    bool  _isMLModelEnabled;
    NSString * _namespaceName;
    TRIRolloutIdentifiers * _rolloutIdentifiers;
    NSString * _treatmentName;
    TRIClient * _trialClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *espressoBinFilePath;
@property (nonatomic, readonly) TRIExperimentIdentifiers *experimentIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inferenceModelConfigPath;
@property (nonatomic, readonly) NSString *inferenceModelDescription;
@property (nonatomic, readonly) bool isMLModelEnabled;
@property (nonatomic, readonly) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentName;

- (void).cxx_destruct;
- (void)_fillDefaultValuesForFactors;
- (void)_setDefaultValuesForFactors;
- (id)espressoBinFilePath;
- (id)experimentIdentifiers;
- (id)inferenceModelConfigPath;
- (id)inferenceModelDescription;
- (id)initWithNamespaceName:(id)arg1 withTrialClient:(id)arg2 shouldDownloadAssets:(bool)arg3;
- (bool)isMLModelEnabled;
- (id)rolloutIdentifiers;
- (id)treatmentName;

@end
