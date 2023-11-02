
@interface AVVideoFrameVisualAnalyzer : NSObject {
    bool  _actuallyEnabled;
    int  _currentAnalysisRequestID;
    <AVVideoFrameVisualAnalyzerDelegate> * _delegate;
    bool  _enabled;
    VKCImageAnalyzer * _imageAnalyzer;
    VKCImageAnalysis * _lastAnalysis;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAnalysisTime;
    double  _lastCurrentTimeChangeTime;
    AVPlayerController * _playerController;
    AVPlayerLayer * _playerLayer;
    AVObservationController * _playerObservationController;
    NSTimer * _timeObservingTimer;
    unsigned long long  _videoFrameAnalysisTypes;
}

@property (nonatomic) bool actuallyEnabled;
@property (nonatomic) <AVVideoFrameVisualAnalyzerDelegate> *delegate;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) VKCImageAnalyzer *imageAnalyzer;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic) unsigned long long videoFrameAnalysisTypes;

+ (bool)analysis:(id)arg1 containsVideoFrameAnalysisType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)_analysisTypes;
- (bool)_canPerformAnalysisOnCurrentAsset;
- (bool)_canStartAnalysis;
- (void)_cancelAllVideoFrameAnalysis;
- (void)_handleVideoFrameAnalysis:(id)arg1 error:(id)arg2;
- (id)_imageAnalysisQueue;
- (void)_resetAnalysis;
- (void)_setupTimeObservingTimerIfNeeded;
- (void)_startVideoFrameAnalysis;
- (void)_startVideoFrameAnalysisAfterDelayIfNeeded;
- (void)_updateActualEnabledStateIfNeeded;
- (void)_updateAnalysisIfNeeded;
- (void)_updateObserversIfNeeded;
- (long long)_videoFrameOrientation;
- (long long)_vkImageOrientationFromTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)actuallyEnabled;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (id)imageAnalyzer;
- (id)initWithPlayerController:(id)arg1 playerLayer:(id)arg2;
- (id)playerController;
- (id)playerLayer;
- (void)setActuallyEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImageAnalyzer:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setVideoFrameAnalysisTypes:(unsigned long long)arg1;
- (unsigned long long)videoFrameAnalysisTypes;

@end
