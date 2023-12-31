
@interface AXMDataSonifier : NSObject {
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    AXMLiveContinuousTone * _continuousScrubbingTone;
    AXMChartDescriptor * _currentChartDescriptor;
    long long  _currentSeriesIndex;
    NSMutableOrderedSet * _dataCategories;
    int  _dataMode;
    id /* block */  _function;
    int  _interpolationMode;
    bool  _isEndingScrubbing;
    bool  _isInLiveContinuousToneSession;
    AXMAudioDataSource * _liveContinuousAudioDataSource;
    AXMLiveContinuousTone * _liveContinuousDataTone;
    AXMAudioDataSourceMixer * _liveContinuousMixerDataSource;
    void * _liveTonePlaybackCallbackRenderingContext;
    double  _maximumDiscreteToneLength;
    double  _maximumPlaybackFrequency;
    double  _maximumToneVolume;
    double  _minimumDiscreteToneLength;
    double  _minimumPlaybackFrequency;
    double  _minimumToneVolume;
    AXMSynthPatch * _patch;
    bool  _paused;
    AXMAudioDataSource * _playbackChartDataAudioDataSource;
    AXMAudioDataSourceMixer * _playbackMixerDataSource;
    NSTimer * _playbackObserverUpdateTimer;
    NSPointerArray * _playbackObservers;
    unsigned long long  _playbackSampleCount;
    AXMAudioDataSource * _playbackTrendlineAudioDataSource;
    bool  _playing;
    bool  _scrubbing;
    AXMAudioDataSource * _scrubbingContinuousAudioDataSource;
    AXMAudioDataSource * _scrubbingDiscreteAudioDataSource;
    void * _scrubbingDiscreteDataRenderingContext;
    AXMAudioDataSourceMixer * _scrubbingMixerDataSource;
    void * _scrubbingPlaybackCallbackRenderingContext;
    AXMAudioDataSource * _scrubbingTrendlineAudioDataSource;
    id /* block */  _trendlineFunction;
    AXMLiveContinuousTone * _trendlineScrubbingTone;
    double  _userDefinedPlaybackDuration;
    bool  _usesBinauralPanning;
}

@property (nonatomic, readonly) AXMLiveContinuousTone *continuousScrubbingTone;
@property (nonatomic, retain) AXMChartDescriptor *currentChartDescriptor;
@property (nonatomic, readonly) double currentPlaybackPosition;
@property (nonatomic, readonly) AXMDataSeriesDescriptor *currentSeries;
@property (nonatomic) long long currentSeriesIndex;
@property (nonatomic, readonly) NSMutableOrderedSet *dataCategories;
@property (nonatomic, readonly) int dataMode;
@property (nonatomic, readonly) id /* block */ function;
@property (nonatomic, readonly) int interpolationMode;
@property (nonatomic, readonly) bool isEndingScrubbing;
@property (nonatomic, readonly) bool isInLiveContinuousToneSession;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) bool isScrubbing;
@property (nonatomic, retain) AXMAudioDataSource *liveContinuousAudioDataSource;
@property (nonatomic, readonly) AXMLiveContinuousTone *liveContinuousDataTone;
@property (nonatomic, retain) AXMAudioDataSourceMixer *liveContinuousMixerDataSource;
@property (nonatomic, readonly) void*liveTonePlaybackCallbackRenderingContext;
@property (nonatomic) double masterVolume;
@property (nonatomic) double maximumDiscreteToneLength;
@property (nonatomic) double maximumPlaybackFrequency;
@property (nonatomic) double maximumToneVolume;
@property (nonatomic) double minimumDiscreteToneLength;
@property (nonatomic) double minimumPlaybackFrequency;
@property (nonatomic) double minimumToneVolume;
@property (nonatomic, retain) AXMSynthPatch *patch;
@property (nonatomic, retain) AXMAudioDataSource *playbackChartDataAudioDataSource;
@property (nonatomic) double playbackDuration;
@property (nonatomic, retain) AXMAudioDataSourceMixer *playbackMixerDataSource;
@property (nonatomic, retain) NSTimer *playbackObserverUpdateTimer;
@property (nonatomic, retain) NSPointerArray *playbackObservers;
@property (nonatomic, readonly) unsigned long long playbackSampleCount;
@property (nonatomic, retain) AXMAudioDataSource *playbackTrendlineAudioDataSource;
@property (nonatomic, retain) AXMAudioDataSource *scrubbingContinuousAudioDataSource;
@property (nonatomic, retain) AXMAudioDataSource *scrubbingDiscreteAudioDataSource;
@property (nonatomic, readonly) void*scrubbingDiscreteDataRenderingContext;
@property (nonatomic, retain) AXMAudioDataSourceMixer *scrubbingMixerDataSource;
@property (nonatomic, readonly) void*scrubbingPlaybackCallbackRenderingContext;
@property (nonatomic, retain) AXMAudioDataSource *scrubbingTrendlineAudioDataSource;
@property (nonatomic, copy) id /* block */ trendlineFunction;
@property (nonatomic, readonly) AXMLiveContinuousTone *trendlineScrubbingTone;
@property (nonatomic) bool usesBinauralPanning;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_initializeAXMAudioDataSources;
- (bool)_initializeAudioComponent;
- (bool)_initializeAudioUnit;
- (void)_initializeLiveToneDataSource;
- (id)_newContinuousToneEnvelope;
- (void)_peakNormalizeBuffer:(void*)arg1 length:(unsigned long long)arg2 level:(double)arg3;
- (void)_regenerateTimeEncodingValuesForDataPoints;
- (void)_renderContinuousAudioForSeries:(id)arg1;
- (void)_renderDiscreteAudioForSeries:(id)arg1;
- (void)_renderSeries:(id)arg1;
- (void)_renderUnivariateFunctionAudio;
- (bool)_setAudioFormat;
- (bool)_setOutputCallback;
- (bool)_uninitializeAudioUnit;
- (void)addPlaybackObserver:(id)arg1;
- (void)beginLiveContinuousToneSession;
- (void)beginScrubbing;
- (id)continuousScrubbingTone;
- (id)currentChartDescriptor;
- (double)currentPlaybackPosition;
- (id)currentSeries;
- (long long)currentSeriesIndex;
- (id)dataCategories;
- (int)dataMode;
- (void)dealloc;
- (double)durationForDurationEncodingValue:(double)arg1;
- (void)endLiveContinuousToneSession;
- (void)endScrubbing;
- (double)frequencyForPitchEncodingValue:(double)arg1;
- (id /* block */)function;
- (id)init;
- (double)interpolatedPitchValueForNormalizedTimePosition:(double)arg1 inSeries:(id)arg2;
- (int)interpolationMode;
- (bool)isEndingScrubbing;
- (bool)isInLiveContinuousToneSession;
- (bool)isPaused;
- (bool)isPlaying;
- (bool)isScrubbing;
- (id)liveContinuousAudioDataSource;
- (id)liveContinuousDataTone;
- (id)liveContinuousMixerDataSource;
- (void*)liveTonePlaybackCallbackRenderingContext;
- (double)masterVolume;
- (double)maximumDiscreteToneLength;
- (double)maximumPlaybackFrequency;
- (double)maximumToneVolume;
- (double)minimumDiscreteToneLength;
- (double)minimumPlaybackFrequency;
- (double)minimumToneVolume;
- (double)normalizedTimeEncodingValueForValue:(id)arg1;
- (double)normalizedValueForValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (id)patch;
- (void)pause;
- (void)play;
- (id)playbackChartDataAudioDataSource;
- (double)playbackDuration;
- (id)playbackMixerDataSource;
- (id)playbackObserverUpdateTimer;
- (id)playbackObservers;
- (unsigned long long)playbackSampleCount;
- (id)playbackTrendlineAudioDataSource;
- (void)removePlaybackObserver:(id)arg1;
- (void)renderSonification;
- (unsigned long long)sampleIndexForTimeOffset:(double)arg1;
- (void)scrubToPlaybackFrame:(unsigned long long)arg1;
- (id)scrubbingContinuousAudioDataSource;
- (id)scrubbingDiscreteAudioDataSource;
- (void*)scrubbingDiscreteDataRenderingContext;
- (id)scrubbingMixerDataSource;
- (void*)scrubbingPlaybackCallbackRenderingContext;
- (id)scrubbingTrendlineAudioDataSource;
- (bool)series:(id)arg1 hasContinuousPitchDataForTimePosition:(double)arg2;
- (void)setCurrentChartDescriptor:(id)arg1;
- (void)setCurrentSeriesIndex:(long long)arg1;
- (void)setLiveContinuousAudioDataSource:(id)arg1;
- (void)setLiveContinuousMixerDataSource:(id)arg1;
- (void)setLiveContinuousToneNormalizedFrequency:(double)arg1;
- (void)setMasterVolume:(double)arg1;
- (void)setMasterVolume:(double)arg1 fadeDuration:(double)arg2;
- (void)setMaximumDiscreteToneLength:(double)arg1;
- (void)setMaximumPlaybackFrequency:(double)arg1;
- (void)setMaximumToneVolume:(double)arg1;
- (void)setMinimumDiscreteToneLength:(double)arg1;
- (void)setMinimumPlaybackFrequency:(double)arg1;
- (void)setMinimumToneVolume:(double)arg1;
- (void)setPatch:(id)arg1;
- (void)setPlaybackChartDataAudioDataSource:(id)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setPlaybackMixerDataSource:(id)arg1;
- (void)setPlaybackObserverUpdateTimer:(id)arg1;
- (void)setPlaybackObservers:(id)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setPlaybackTrendlineAudioDataSource:(id)arg1;
- (void)setScrubbingContinuousAudioDataSource:(id)arg1;
- (void)setScrubbingDiscreteAudioDataSource:(id)arg1;
- (void)setScrubbingMixerDataSource:(id)arg1;
- (void)setScrubbingTrendlineAudioDataSource:(id)arg1;
- (void)setTrendlineFunction:(id /* block */)arg1;
- (void)setUsesBinauralPanning:(bool)arg1;
- (void)stopPlaying;
- (void)stopScrubbing;
- (double)timeOffsetForTimeEncodingValue:(id)arg1;
- (id /* block */)trendlineFunction;
- (id)trendlineScrubbingTone;
- (bool)usesBinauralPanning;
- (double)valueFromNormalizedValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)volumeForVolumeEncodingValue:(double)arg1;

@end
