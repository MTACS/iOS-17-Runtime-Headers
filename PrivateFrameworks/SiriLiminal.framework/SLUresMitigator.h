
@interface SLUresMitigator : NSObject {
    NSDictionary * _inputOpsMap;
    MLPredictionOptions * _options;
    NSDictionary * _outputMap;
    NSMutableDictionary * _thresholdMap;
    MLModel * _uresModel;
    NSString * _version;
}

+ (id)getTranscriptionForSpeechPackage:(id)arg1;

- (void).cxx_destruct;
- (id)_convertMultiArrayToNSArray:(id)arg1 withShape:(id)arg2;
- (id)_convertNSArrayToMultiArray:(id)arg1 withShape:(id)arg2;
- (void)_createInputOriginThresholdMap:(id)arg1;
- (id)_processInputFeats:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 error:(id*)arg2;
- (void)processInputFeats:(id)arg1 completion:(id /* block */)arg2;

@end
