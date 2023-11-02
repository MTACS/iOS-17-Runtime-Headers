
@interface NURenderJobStatisticsHistogram : NSObject {
    unsigned long long  _binCount;
    long long * _completeDurationHistogram;
    long long  _completeDurationHistogramCount;
    long long * _completeLatencyHistogram;
    long long  _completeLatencyHistogramCount;
    double  _millisPerBin;
    long long * _prepareDurationHistogram;
    long long  _prepareDurationHistogramCount;
    long long * _prepareLatencyHistogram;
    long long  _prepareLatencyHistogramCount;
    long long * _renderDurationHistogram;
    long long  _renderDurationHistogramCount;
    long long * _renderLatencyHistogram;
    long long  _renderLatencyHistogramCount;
    long long * _totalDurationHistogram;
    long long  _totalDurationHistogramCount;
    long long * _totalHistogram;
    long long  _totalHistogramCount;
    long long * _totalLatencyHistogram;
    long long  _totalLatencyHistogramCount;
}

@property (readonly) unsigned long long binCount;
@property (readonly) long long*completeDurationHistogram;
@property (readonly) long long completeDurationHistogramCount;
@property (readonly) long long*completeLatencyHistogram;
@property (readonly) long long completeLatencyHistogramCount;
@property (readonly) double millisPerBin;
@property (readonly) long long*prepareDurationHistogram;
@property (readonly) long long prepareDurationHistogramCount;
@property (readonly) long long*prepareLatencyHistogram;
@property (readonly) long long prepareLatencyHistogramCount;
@property (readonly) long long*renderDurationHistogram;
@property (readonly) long long renderDurationHistogramCount;
@property (readonly) long long*renderLatencyHistogram;
@property (readonly) long long renderLatencyHistogramCount;
@property (readonly) long long*totalDurationHistogram;
@property (readonly) long long totalDurationHistogramCount;
@property (readonly) long long*totalHistogram;
@property (readonly) long long totalHistogramCount;
@property (readonly) long long*totalLatencyHistogram;
@property (readonly) long long totalLatencyHistogramCount;

- (void)addStatisticsToHistogram:(id)arg1;
- (unsigned long long)binCount;
- (long long*)completeDurationHistogram;
- (long long)completeDurationHistogramCount;
- (long long*)completeLatencyHistogram;
- (long long)completeLatencyHistogramCount;
- (void)dealloc;
- (id)description;
- (id)getPercentiles:(long long*)arg1 numSamples:(long long)arg2;
- (id)graphHistogram:(long long*)arg1 label:(id)arg2;
- (id)initWithBins:(unsigned long long)arg1 millisPerBin:(double)arg2;
- (double)millisPerBin;
- (long long*)prepareDurationHistogram;
- (long long)prepareDurationHistogramCount;
- (long long*)prepareLatencyHistogram;
- (long long)prepareLatencyHistogramCount;
- (long long*)renderDurationHistogram;
- (long long)renderDurationHistogramCount;
- (long long*)renderLatencyHistogram;
- (long long)renderLatencyHistogramCount;
- (long long*)totalDurationHistogram;
- (long long)totalDurationHistogramCount;
- (long long*)totalHistogram;
- (long long)totalHistogramCount;
- (long long*)totalLatencyHistogram;
- (long long)totalLatencyHistogramCount;

@end
