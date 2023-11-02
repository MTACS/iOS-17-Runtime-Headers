
@interface SSRPitchExtractor : NSObject <EARAudioResultsGeneratorDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    EARAudioResultsGenerator * _resultsGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) EARAudioResultsGenerator *resultsGenerator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_getPitchHzFromRawData:(float)arg1;
- (float)_getVoicingProbFromRawData:(float)arg1;
- (float)_getVoicingWeightedPitchForResultMatrix:(id)arg1;
- (void)_processAudioFileURL:(id)arg1;
- (float)getPitchForUtteranceAudioFiles:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)queue;
- (id)resultsGenerator;
- (void)setQueue:(id)arg1;
- (void)setResultsGenerator:(id)arg1;

@end
