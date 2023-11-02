
@interface TCHumanActionRecognitionTrainerSTGCNOptions : NSObject {
    long long  _batchSize;
    float  _dropoutProbability;
    long long  _numClasses;
    long long  _numFrames;
    long long  _numKeypoints;
}

@property (nonatomic) long long batchSize;
@property (nonatomic) float dropoutProbability;
@property (nonatomic) long long numClasses;
@property (nonatomic) long long numFrames;
@property (nonatomic) long long numKeypoints;

- (long long)batchSize;
- (float)dropoutProbability;
- (id)init;
- (long long)numClasses;
- (long long)numFrames;
- (long long)numKeypoints;
- (void)setBatchSize:(long long)arg1;
- (void)setDropoutProbability:(float)arg1;
- (void)setNumClasses:(long long)arg1;
- (void)setNumFrames:(long long)arg1;
- (void)setNumKeypoints:(long long)arg1;
- (void)validate;

@end
