
@interface TCActivityClassifierTrainerOptions : NSObject {
    long long  _batchSize;
    long long  _numClasses;
    long long  _numFeatures;
    long long  _numPredictionsPerChunk;
    long long  _predictionWindow;
    long long  _randomSeed;
}

@property (nonatomic) long long batchSize;
@property (nonatomic) long long numClasses;
@property (nonatomic) long long numFeatures;
@property (nonatomic) long long numPredictionsPerChunk;
@property (nonatomic) long long predictionWindow;
@property (nonatomic) long long randomSeed;

- (long long)batchSize;
- (id)init;
- (long long)numClasses;
- (long long)numFeatures;
- (long long)numPredictionsPerChunk;
- (long long)predictionWindow;
- (long long)randomSeed;
- (void)setBatchSize:(long long)arg1;
- (void)setNumClasses:(long long)arg1;
- (void)setNumFeatures:(long long)arg1;
- (void)setNumPredictionsPerChunk:(long long)arg1;
- (void)setPredictionWindow:(long long)arg1;
- (void)setRandomSeed:(long long)arg1;

@end
