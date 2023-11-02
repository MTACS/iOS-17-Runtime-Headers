
@interface AXMDataSonificationManager : NSObject <AXMDataSonifierPlaybackObserver, AXMDataSummaryCategoryNameProvider> {
    AXMChartDescriptor * _currentChartDescriptor;
    AXMDataSummary * _dataSeriesSummary;
    NSObject<OS_dispatch_queue> * _dataSonifierAccessQueue;
    bool  _hapticsEnabled;
    bool  _isDataSeriesRegressionModelLoaded;
    double  _lastPlayheadPosition;
    double  _lastScrubbingValueAnnouncementPosition;
    NSTimer * _scrubbingValueAnnouncementTimer;
    NSArray * _xCategoryLabels;
    NSArray * _xGridlinePositions;
}

@property (nonatomic, retain) AXMChartDescriptor *currentChartDescriptor;
@property (nonatomic, readonly) double currentPlaybackPosition;
@property (nonatomic) long long currentSeriesIndex;
@property (nonatomic, retain) AXMDataSummary *dataSeriesSummary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hapticsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDataSeriesRegressionModelLoaded;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) bool isScrubbing;
@property (nonatomic) double lastPlayheadPosition;
@property (nonatomic) double lastScrubbingValueAnnouncementPosition;
@property (nonatomic, readonly) unsigned long long playbackStatus;
@property (nonatomic, retain) NSTimer *scrubbingValueAnnouncementTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *xCategoryLabels;
@property (nonatomic, readonly) NSArray *xGridlinePositions;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)announceValueForPlayheadPosition;
- (void)beginLiveModeSession;
- (void)beginScrubbingSession;
- (id)categoryNameForXAxisPosition:(double)arg1;
- (id)currentChartDescriptor;
- (double)currentPlaybackPosition;
- (long long)currentSeriesIndex;
- (id)dataSeriesSummary;
- (void)endLiveModeSession;
- (void)endScrubbingSession;
- (bool)hapticsEnabled;
- (id)init;
- (bool)isDataSeriesRegressionModelLoaded;
- (bool)isPaused;
- (bool)isPlaying;
- (bool)isScrubbing;
- (double)lastPlayheadPosition;
- (double)lastScrubbingValueAnnouncementPosition;
- (void)pause;
- (void)play;
- (unsigned long long)playbackStatus;
- (void)scrubToPosition:(double)arg1;
- (id)scrubbingValueAnnouncementTimer;
- (void)setCurrentChartDescriptor:(id)arg1;
- (void)setCurrentSeriesIndex:(long long)arg1;
- (void)setDataSeriesSummary:(id)arg1;
- (void)setHapticsEnabled:(bool)arg1;
- (void)setLastPlayheadPosition:(double)arg1;
- (void)setLastScrubbingValueAnnouncementPosition:(double)arg1;
- (void)setLiveModeValue:(double)arg1;
- (void)setScrubbingValueAnnouncementTimer:(id)arg1;
- (void)stopPlaying;
- (void)stopSpeaking;
- (id)valueDescriptionForPlayheadPosition;
- (id)xCategoryLabels;
- (id)xGridlinePositions;

@end
