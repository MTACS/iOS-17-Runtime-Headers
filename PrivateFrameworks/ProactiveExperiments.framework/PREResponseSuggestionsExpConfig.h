
@interface PREResponseSuggestionsExpConfig : NSObject <PREResponsesTrialProtocol> {
    NSString * _espressoBinFilePath;
    TRIExperimentIdentifiers * _experimentIdentifiers;
    NSString * _inferenceModelConfigPath;
    NSString * _inferenceModelDescription;
    NSString * _inferenceModelFilePath;
    bool  _isMLModelEnabled;
    NSString * _namespaceName;
    TRIRolloutIdentifiers * _rolloutIdentifiers;
    NSString * _treatmentName;
    NSString * _vocabFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *espressoBinFilePath;
@property (nonatomic, readonly) TRIExperimentIdentifiers *experimentIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inferenceModelConfigPath;
@property (nonatomic, readonly) NSString *inferenceModelDescription;
@property (nonatomic, readonly) NSString *inferenceModelFilePath;
@property (nonatomic, readonly) bool isMLModelEnabled;
@property (nonatomic, readonly) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentName;
@property (nonatomic, readonly) NSString *vocabFilePath;

- (void).cxx_destruct;
- (void)_fillDefaultValueForFactors;
- (void)_setDefaultValuesForFactors;
- (id)espressoBinFilePath;
- (id)experimentIdentifiers;
- (id)inferenceModelConfigPath;
- (id)inferenceModelDescription;
- (id)inferenceModelFilePath;
- (id)init;
- (id)initWithNamespaceName:(id)arg1 withTrialClient:(id)arg2 shouldDownloadAssets:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfig:(id)arg1;
- (bool)isMLModelEnabled;
- (id)rolloutIdentifiers;
- (id)treatmentName;
- (id)vocabFilePath;

@end
