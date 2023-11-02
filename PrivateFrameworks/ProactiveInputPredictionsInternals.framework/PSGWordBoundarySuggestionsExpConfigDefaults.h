
@interface PSGWordBoundarySuggestionsExpConfigDefaults : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol> {
    NSString * _espressoBinFilePath;
    TRIExperimentIdentifiers * _experimentIdentifiers;
    NSString * _inferenceModelConfigPath;
    bool  _isMLModelEnabled;
    TRIRolloutIdentifiers * _rolloutIdentifiers;
    NSString * _treatmentName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *espressoBinFilePath;
@property (nonatomic, readonly) TRIExperimentIdentifiers *experimentIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inferenceModelConfigPath;
@property (nonatomic, readonly) bool isMLModelEnabled;
@property (nonatomic, readonly) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentName;

- (void).cxx_destruct;
- (id)espressoBinFilePath;
- (id)experimentIdentifiers;
- (id)inferenceModelConfigPath;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfig:(id)arg1;
- (bool)isMLModelEnabled;
- (id)rolloutIdentifiers;
- (id)treatmentName;

@end
