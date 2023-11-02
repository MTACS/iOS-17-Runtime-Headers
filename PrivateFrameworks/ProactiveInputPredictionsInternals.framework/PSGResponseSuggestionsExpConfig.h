
@interface PSGResponseSuggestionsExpConfig : NSObject <PSGResponseSuggestionsExpConfigProtocol> {
    NSString * _espressoBinFilePath;
    TRIExperimentIdentifiers * _experimentIdentifiers;
    NSString * _inferenceModelConfigPath;
    NSString * _inferenceModelDescription;
    NSString * _inferenceModelFilePath;
    bool  _isMLModelDownloading;
    bool  _isMLModelEnabled;
    NSString * _language;
    NSString * _namespaceName;
    TRIRolloutIdentifiers * _rolloutIdentifiers;
    NSString * _treatmentName;
    TRIClient * _trialClient;
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
@property (nonatomic, readonly) bool isMLModelDownloading;
@property (nonatomic, readonly) bool isMLModelEnabled;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentName;
@property (nonatomic, readonly) NSString *vocabFilePath;

- (void).cxx_destruct;
- (void)_fillDefaultValuesForFactors;
- (void)_setDefaultValuesForFactors;
- (id)espressoBinFilePath;
- (id)experimentIdentifiers;
- (id)inferenceModelConfigPath;
- (id)inferenceModelDescription;
- (id)inferenceModelFilePath;
- (id)init;
- (id)initWithNamespaceName:(id)arg1 withLanguage:(id)arg2 withTrialClient:(id)arg3 shouldDownloadAssets:(bool)arg4;
- (bool)isMLModelDownloading;
- (bool)isMLModelEnabled;
- (id)language;
- (id)rolloutIdentifiers;
- (id)treatmentName;
- (id)vocabFilePath;

@end
