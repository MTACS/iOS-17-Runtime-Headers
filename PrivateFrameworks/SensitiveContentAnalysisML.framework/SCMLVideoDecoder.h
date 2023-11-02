
@interface SCMLVideoDecoder : NSObject {
    AVAssetReader * _assetReader;
    AVAssetReaderTrackOutput * _assetReaderTrack;
    SCMLVideoAnalysisConfiguration * _config;
    unsigned long long  _currentFrameIndex;
    double  _durationInSeconds;
    unsigned long long  _frameLimit;
    unsigned long long  _framesPerSync;
    double  _totalFrames;
}

@property (nonatomic, retain) AVAssetReader *assetReader;
@property (nonatomic, retain) AVAssetReaderTrackOutput *assetReaderTrack;
@property (nonatomic, retain) SCMLVideoAnalysisConfiguration *config;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) double durationInSeconds;
@property (nonatomic) unsigned long long frameLimit;
@property (nonatomic) unsigned long long framesPerSync;
@property (nonatomic) double totalFrames;

- (void).cxx_destruct;
- (id)assetReader;
- (id)assetReaderTrack;
- (id)config;
- (unsigned long long)currentFrameIndex;
- (double)durationInSeconds;
- (unsigned long long)frameLimit;
- (unsigned long long)framesPerSync;
- (id)initWithConfig:(id)arg1;
- (unsigned long long)maxNumFrames;
- (id)nextFrameWithError:(id*)arg1;
- (void)reset;
- (void)setAssetReader:(id)arg1;
- (void)setAssetReaderTrack:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setCurrentFrameIndex:(unsigned long long)arg1;
- (void)setDurationInSeconds:(double)arg1;
- (void)setFrameLimit:(unsigned long long)arg1;
- (void)setFramesPerSync:(unsigned long long)arg1;
- (void)setTotalFrames:(double)arg1;
- (bool)startDecodingVideoURL:(id)arg1 error:(id*)arg2;
- (double)totalFrames;
- (bool)useKeyFrame;

@end
