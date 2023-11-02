
@interface _PXVideoStabilizeResult : NSObject <PXVideoStabilizeResult> {
    unsigned long long  _analysisType;
    NSDictionary * _debugInfo;
    NSError * _error;
    AVAudioMix * _outputAudioMix;
    AVAsset * _outputVideoAsset;
    AVVideoComposition * _outputVideoComposition;
    PXVideoStabilizeOperationSpec * _spec;
    NSDictionary * _stabilizationRecipe;
}

@property (nonatomic) unsigned long long analysisType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAudioMix *outputAudioMix;
@property (nonatomic, retain) AVAsset *outputVideoAsset;
@property (nonatomic, retain) AVVideoComposition *outputVideoComposition;
@property (nonatomic, retain) PXVideoStabilizeOperationSpec *spec;
@property (nonatomic, retain) NSDictionary *stabilizationRecipe;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)analysisType;
- (id)debugInfo;
- (id)dictionaryRepresentation;
- (id)error;
- (id)outputAudioMix;
- (id)outputVideoAsset;
- (id)outputVideoComposition;
- (void)setAnalysisType:(unsigned long long)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOutputAudioMix:(id)arg1;
- (void)setOutputVideoAsset:(id)arg1;
- (void)setOutputVideoComposition:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setStabilizationRecipe:(id)arg1;
- (id)spec;
- (id)stabilizationRecipe;

@end
