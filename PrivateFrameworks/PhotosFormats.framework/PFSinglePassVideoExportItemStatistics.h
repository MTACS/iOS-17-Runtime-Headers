
@interface PFSinglePassVideoExportItemStatistics : NSObject {
    double  _conversionDuration;
    float  _frameRate;
    unsigned long long  _lastOutputChunkTimestamp;
    double  _lastProcessedInputFramePresentationTime;
    NSMutableArray * _outputChunkMeasurements;
    unsigned long long  _processedAdditionalSampleBytes;
    long long  _processedOutputFrameCount;
    unsigned long long  _processedOutputTotalBytes;
    unsigned long long  _processedVideoSampleBytes;
    unsigned long long  _targetOutputTotalBytes;
    double  _targetPlaybackDuration;
}

@property (readonly) unsigned long long averageOutputChunkBytes;
@property (readonly) double averageOutputChunkTimeInterval;
@property double conversionDuration;
@property (readonly) long long effectiveEncodingBitRate;
@property float frameRate;
@property unsigned long long lastOutputChunkTimestamp;
@property double lastProcessedInputFramePresentationTime;
@property (retain) NSMutableArray *outputChunkMeasurements;
@property unsigned long long processedAdditionalSampleBytes;
@property (readonly) unsigned long long processedOutputBytesPerSecond;
@property long long processedOutputFrameCount;
@property unsigned long long processedOutputTotalBytes;
@property unsigned long long processedVideoSampleBytes;
@property (readonly) float processingFramesPerSecond;
@property (readonly) long long targetEncodingBitRate;
@property unsigned long long targetOutputTotalBytes;
@property double targetPlaybackDuration;

+ (id)statisticsWithTargetPlaybackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 frameRate:(float)arg2 targetOutputTotalBytes:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)addMeasurementForBytesDelivered:(unsigned long long)arg1;
- (unsigned long long)averageOutputChunkBytes;
- (double)averageOutputChunkTimeInterval;
- (double)conversionDuration;
- (long long)effectiveEncodingBitRate;
- (void)enumerateOutputChunkMeasurementsWithHandler:(id /* block */)arg1;
- (float)frameRate;
- (id)init;
- (unsigned long long)lastOutputChunkTimestamp;
- (double)lastProcessedInputFramePresentationTime;
- (id)outputChunkMeasurements;
- (id)outputChunkMeasurementsDescription;
- (unsigned long long)processedAdditionalSampleBytes;
- (unsigned long long)processedOutputBytesPerSecond;
- (long long)processedOutputFrameCount;
- (unsigned long long)processedOutputTotalBytes;
- (unsigned long long)processedVideoSampleBytes;
- (float)processingFramesPerSecond;
- (void)setConversionDuration:(double)arg1;
- (void)setFrameRate:(float)arg1;
- (void)setLastOutputChunkTimestamp:(unsigned long long)arg1;
- (void)setLastProcessedInputFramePresentationTime:(double)arg1;
- (void)setOutputChunkMeasurements:(id)arg1;
- (void)setProcessedAdditionalSampleBytes:(unsigned long long)arg1;
- (void)setProcessedOutputFrameCount:(long long)arg1;
- (void)setProcessedOutputTotalBytes:(unsigned long long)arg1;
- (void)setProcessedVideoSampleBytes:(unsigned long long)arg1;
- (void)setTargetOutputTotalBytes:(unsigned long long)arg1;
- (void)setTargetPlaybackDuration:(double)arg1;
- (id)summaryDescription;
- (long long)targetEncodingBitRate;
- (unsigned long long)targetOutputTotalBytes;
- (double)targetPlaybackDuration;

@end