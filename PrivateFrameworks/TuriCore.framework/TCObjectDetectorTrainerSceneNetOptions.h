
@interface TCObjectDetectorTrainerSceneNetOptions : NSObject {
    long long  _batchSize;
    long long  _maxIterations;
    long long  _numClasses;
    long long  _randomSeed;
}

@property (nonatomic) long long batchSize;
@property (nonatomic) long long maxIterations;
@property (nonatomic) long long numClasses;
@property (nonatomic) long long randomSeed;

- (long long)batchSize;
- (struct Config { int x1; int x2; int x3; int x4; int x5; })config;
- (id)init;
- (long long)maxIterations;
- (long long)numClasses;
- (long long)randomSeed;
- (void)setBatchSize:(long long)arg1;
- (void)setMaxIterations:(long long)arg1;
- (void)setNumClasses:(long long)arg1;
- (void)setRandomSeed:(long long)arg1;

@end
