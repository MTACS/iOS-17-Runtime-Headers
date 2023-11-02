
@interface PSGCustomResponseHarvester : NSObject {
    unsigned long long  _batchSize;
    NSString * _checkpointFullPath;
    int  _customResponsesStep;
    NSFileManager * _fManager;
    NSDate * _latestProcessedDate;
    NSString * _modelConfigPath;
    NSMutableDictionary * _modelExistsForLanguage;
    NSString * _modelFilePath;
    NSString * _modelVocabPath;
    PETEventTracker2 * _pet2tracker;
    NSString * _preferredLanguage;
    NSString * _storeDirectory;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

@property (nonatomic, readonly) NSMutableDictionary *modelExistsForLanguage;

+ (void)clearCustomResponsesCheckpointForTesting;
+ (void)runHarvestSkipMessageCollection:(bool)arg1 clearCheckpoint:(bool)arg2 reportMetrics:(bool)arg3 modelConfigPath:(id)arg4 modelVocabPath:(id)arg5 modelFilePath:(id)arg6 storeDirectory:(id)arg7 evalFraction:(id)arg8;

- (void).cxx_destruct;
- (id)_customResponseParametersWithConfigPath:(id)arg1;
- (id)_customResponseParametersWithExperiment:(id)arg1;
- (id)_getCustomResponseParameters;
- (unsigned long long)activityStateAfterFilterWithStore:(id)arg1 forActivity:(id)arg2 andCustomResponseParameters:(id)arg3;
- (bool)deferAfterWriteCheckpointForActivity:(id)arg1;
- (id)getCustomResponsesLatestProcessedDateForTesting;
- (int)getCustomResponsesStepForTesting;
- (void)harvestWithActivity:(id)arg1;
- (id)initWithActivityManager:(id)arg1;
- (id)initWithActivityManager:(id)arg1 modelConfigPath:(id)arg2 modelVocabPath:(id)arg3 modelFilePath:(id)arg4 storeDirectory:(id)arg5;
- (bool)isSupportedLanguage:(id)arg1;
- (void)loadCustomResponsesCheckpoint;
- (id)modelExistsForLanguage;
- (id)modelForLanguage:(id)arg1;
- (void)setCustomResponsesLatestProcessedDateForTesting:(id)arg1;
- (void)setCustomResponsesStepForTesting:(int)arg1;
- (void)setPet2TrackerForTesting:(id)arg1;
- (void)writeCheckpoint;

@end
