
@interface NviDirectionalitySignalData : NviSignalData {
    NSDictionary * _azDistribution;
    float  _azimuth;
    float  _confidence;
    unsigned long long  _endSample;
    float  _estimatedAzimuth;
    double  _processedAudioDurMs;
    NSArray * _spatialSpectrumData;
    unsigned long long  _startSample;
}

@property (nonatomic, retain) NSDictionary *azDistribution;
@property (nonatomic) float azimuth;
@property (nonatomic) float confidence;
@property (nonatomic) unsigned long long endSample;
@property (nonatomic) float estimatedAzimuth;
@property (nonatomic, readonly) float mostSampledAzimuth;
@property (nonatomic) double processedAudioDurMs;
@property (nonatomic, retain) NSArray *spatialSpectrumData;
@property (nonatomic) unsigned long long startSample;

+ (id)headerString;

- (void).cxx_destruct;
- (id)_spatialSpectrumLogStr;
- (id)azDistribution;
- (float)azimuth;
- (float)confidence;
- (id)description;
- (unsigned long long)endSample;
- (float)estimatedAzimuth;
- (id)initWithStartSample:(unsigned long long)arg1 endSample:(unsigned long long)arg2 confidence:(float)arg3 azimuth:(float)arg4 estimatedAzimuth:(float)arg5;
- (float)mostSampledAzimuth;
- (double)processedAudioDurMs;
- (void)setAzDistribution:(id)arg1;
- (void)setAzimuth:(float)arg1;
- (void)setConfidence:(float)arg1;
- (void)setEndSample:(unsigned long long)arg1;
- (void)setEstimatedAzimuth:(float)arg1;
- (void)setProcessedAudioDurMs:(double)arg1;
- (void)setSpatialSpectrumData:(id)arg1;
- (void)setStartSample:(unsigned long long)arg1;
- (id)spatialSpectrumData;
- (unsigned long long)startSample;
- (id)stringForLogging;

@end
