
@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver> {
    RCMutableWaveform * _accumulatorWaveform;
    double  _durationPerWaveformSlice;
    NSURL * _generatedWaveformOutputURL;
    bool  _hasSavedGeneratedWaveform;
    bool  _hasStartedLoading;
    double  _liveRecordingMergeTime;
    NSObject<OS_dispatch_queue> * _queue;
    RCWaveformGenerator * _waveformGenerator;
    NSHashTable * _weakObservers;
}

@property (nonatomic, readonly) RCWaveform *accumulatorWaveform;
@property (nonatomic, readonly) double averagePowerLevelsRate;
@property (nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double durationPerWaveformSlice;
@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly) NSURL *generatedWaveformOutputURL;
@property bool hasSavedGeneratedWaveform;
@property (nonatomic, readonly) bool hasStartedLoading;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float loadingProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { double x1; double x2; } timeRangeToHighlight;
@property (nonatomic, readonly) RCWaveformGenerator *waveformGenerator;
@property (nonatomic, readonly) NSHashTable *weakObservers;

- (void).cxx_destruct;
- (void)_performObserversBlock:(id /* block */)arg1;
- (void)_performOnObserversBlock:(id /* block */)arg1;
- (id)accumulatorWaveform;
- (void)addObserver:(id)arg1;
- (double)averagePowerLevelsRate;
- (void)beginLoading;
- (void)cancelLoading;
- (bool)canceled;
- (void)dealloc;
- (double)duration;
- (double)durationPerWaveformSlice;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (bool)finished;
- (id)generatedWaveformOutputURL;
- (bool)hasSavedGeneratedWaveform;
- (bool)hasStartedLoading;
- (id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2;
- (float)loadingProgress;
- (void)mergeGeneratedWaveformIfNecessary;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)saveGeneratedWaveformIfNecessary;
- (id)saveableWaveform;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (void)setDurationPerWaveformSlice:(double)arg1;
- (void)setHasSavedGeneratedWaveform:(bool)arg1;
- (bool)setPaused:(bool)arg1;
- (bool)shouldMergeLiveWaveform;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeToHighlight;
- (void)updateAccumulatorWaveformSegmentsWithBlock:(id /* block */)arg1;
- (bool)waitUntilFinished;
- (id)waveformGenerator;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (id)waveformSegmentsInTimeRange:(struct { double x1; double x2; })arg1;
- (id)waveformSegmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1;
- (id)weakObservers;

@end
