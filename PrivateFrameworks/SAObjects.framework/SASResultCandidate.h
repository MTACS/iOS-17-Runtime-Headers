
@interface SASResultCandidate : SABaseClientBoundCommand

@property (nonatomic, retain) SASRecognition *filteredRecognition;
@property (nonatomic, copy) NSNumber *latticeRnnMitigatorCalibrationOffset;
@property (nonatomic, copy) NSNumber *latticeRnnMitigatorCalibrationScale;
@property (nonatomic, copy) NSNumber *latticeRnnMitigatorIsProcessed;
@property (nonatomic, copy) NSString *latticeRnnMitigatorModelId;
@property (nonatomic) double latticeRnnMitigatorScore;
@property (nonatomic) double latticeRnnMitigatorThreshold;
@property (nonatomic, copy) NSNumber *processedAudioDuration;
@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, copy) NSString *resultId;
@property (nonatomic, copy) NSNumber *speechProfileUsed;
@property (nonatomic, copy) NSString *speechRecognitionTask;

+ (id)resultCandidate;
+ (id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)filteredRecognition;
- (id)groupIdentifier;
- (id)latticeRnnMitigatorCalibrationOffset;
- (id)latticeRnnMitigatorCalibrationScale;
- (id)latticeRnnMitigatorIsProcessed;
- (id)latticeRnnMitigatorModelId;
- (double)latticeRnnMitigatorScore;
- (double)latticeRnnMitigatorThreshold;
- (bool)mutatingCommand;
- (id)processedAudioDuration;
- (id)recognition;
- (bool)requiresResponse;
- (id)resultId;
- (void)setFilteredRecognition:(id)arg1;
- (void)setLatticeRnnMitigatorCalibrationOffset:(id)arg1;
- (void)setLatticeRnnMitigatorCalibrationScale:(id)arg1;
- (void)setLatticeRnnMitigatorIsProcessed:(id)arg1;
- (void)setLatticeRnnMitigatorModelId:(id)arg1;
- (void)setLatticeRnnMitigatorScore:(double)arg1;
- (void)setLatticeRnnMitigatorThreshold:(double)arg1;
- (void)setProcessedAudioDuration:(id)arg1;
- (void)setRecognition:(id)arg1;
- (void)setResultId:(id)arg1;
- (void)setSpeechProfileUsed:(id)arg1;
- (void)setSpeechRecognitionTask:(id)arg1;
- (id)speechProfileUsed;
- (id)speechRecognitionTask;

@end
