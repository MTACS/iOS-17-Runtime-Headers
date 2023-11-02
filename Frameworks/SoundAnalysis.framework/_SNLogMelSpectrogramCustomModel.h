
@interface _SNLogMelSpectrogramCustomModel : NSObject <MLCustomModel> {
    NSString * _inputFeatureName;
    struct SNLogMelParameters { 
        float sampleRate; 
        unsigned int numMelBands; 
        float minFrequency; 
        float maxFrequency; 
        int melType; 
        unsigned int hopLength; 
        unsigned int windowLength; 
        unsigned int windowOffset; 
        unsigned int fftLength; 
        int fftOffset; 
        int normalizationStrategy; 
    }  _logMelExtractionParameters;
    NSString * _outputFeatureName;
}

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
