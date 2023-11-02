
@interface SoundAnalysis._SNLogMelSpectrogramCustomModel : NSObject <MLCustomModel> {
    void inputFeatureName;
    void logMelExtractionParameters;
    void outputFeatureName;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
