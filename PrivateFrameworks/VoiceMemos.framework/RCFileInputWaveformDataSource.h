
@interface RCFileInputWaveformDataSource : RCWaveformDataSource {
    NSURL * _AVFileURL;
    double  _cachedDuration;
    double  _destinationBeginTime;
    float  _loadingProgress;
    NSObject<OS_dispatch_queue> * _serialQueue;
    struct { 
        double beginTime; 
        double endTime; 
    }  _sourceTimeRange;
}

@property (nonatomic, readonly, copy) NSURL *AVFileURL;
@property (nonatomic) double destinationBeginTime;
@property (nonatomic, readonly) bool savesGeneratedWaveform;
@property (nonatomic) struct { double x1; double x2; } sourceTimeRange;

- (void).cxx_destruct;
- (id)AVFileURL;
- (double)destinationBeginTime;
- (double)duration;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithAVFileURL:(id)arg1;
- (id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(bool)arg2 segmentFlushInterval:(double)arg3;
- (float)loadingProgress;
- (void)saveGeneratedWaveformIfNecessary;
- (bool)savesGeneratedWaveform;
- (void)setDestinationBeginTime:(double)arg1;
- (void)setLoadingProgress:(float)arg1;
- (bool)setPaused:(bool)arg1;
- (void)setSourceTimeRange:(struct { double x1; double x2; })arg1;
- (bool)shouldMergeLiveWaveform;
- (struct { double x1; double x2; })sourceTimeRange;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;

@end
