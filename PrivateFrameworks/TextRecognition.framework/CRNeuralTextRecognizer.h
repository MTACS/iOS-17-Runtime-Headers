
@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding> {
    CRNeuralRecognizerConfiguration * _configuration;
    CRPerformanceStatistics * _decodingStats;
    unsigned int  _desiredQoS;
    NSObject<CRRecognizerFeatureProviding> * _featureProvider;
    CRPerformanceStatistics * _inferenceStats;
    NSObject<CRTextRecognizerModel> * _model;
    long long  _resourceUsers;
    bool  _shouldCancel;
    NSObject<CRTextDecoding> * _textDecoder;
    bool  _unloadResourcesWhenNotInUse;
}

@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRPerformanceStatistics *decodingStats;
@property (readonly, copy) NSString *description;
@property unsigned int desiredQoS;
@property (retain) NSObject<CRRecognizerFeatureProviding> *featureProvider;
@property (readonly) unsigned long long hash;
@property (retain) CRPerformanceStatistics *inferenceStats;
@property (retain) NSObject<CRTextRecognizerModel> *model;
@property long long resourceUsers;
@property bool shouldCancel;
@property (readonly) Class superclass;
@property (retain) NSObject<CRTextDecoding> *textDecoder;
@property bool unloadResourcesWhenNotInUse;

+ (id)_modelForRevision:(long long)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)_textDecoderForRevision:(long long)arg1 configuration:(id)arg2 model:(id)arg3 error:(id*)arg4;
+ (id)recognizerForLocale:(id)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_featureProviderWithError:(id*)arg1;
- (bool)_isCancelled;
- (bool)_loadResourcesWithError:(id*)arg1;
- (void)_releaseIntermediateResources;
- (void)_unloadResources;
- (void)cancel;
- (id)configuration;
- (id)decodingStats;
- (unsigned int)desiredQoS;
- (id)featureProvider;
- (id)inferenceStats;
- (id)init;
- (id)model;
- (bool)performWithResource:(id /* block */)arg1 error:(id*)arg2;
- (bool)preheatWithError:(id*)arg1;
- (id)recognizeInImage:(id)arg1 lineRegions:(id)arg2 rectifier:(id)arg3 progressHandler:(id /* block */)arg4 error:(id*)arg5;
- (long long)resourceUsers;
- (void)setConfiguration:(id)arg1;
- (void)setDecodingStats:(id)arg1;
- (void)setDesiredQoS:(unsigned int)arg1;
- (void)setFeatureProvider:(id)arg1;
- (void)setInferenceStats:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setResourceUsers:(long long)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setTextDecoder:(id)arg1;
- (void)setUnloadResourcesWhenNotInUse:(bool)arg1;
- (bool)shouldCancel;
- (bool)shouldModelSupportCharacterBoxes;
- (bool)shouldUseLM;
- (id)textDecoder;
- (id)thresholdsForTextRegion:(id)arg1 withLocale:(id)arg2;
- (bool)unloadResourcesWhenNotInUse;

@end
