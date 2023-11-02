
@interface Timeseries : NSObject {
    TimeseriesInternal * _underlyingObject;
}

@property (readonly) TimeseriesInternal *underlyingObject;

- (void).cxx_destruct;
- (id)init;
- (id)runBinomialTestTimeseriesWithSamples:(id)arg1 sampleTimestamps:(id)arg2 chunkMethod:(id)arg3 minimumSampleSize:(id)arg4 lastTimestampPreviousTest:(id)arg5 significanceLevel:(id)arg6 pHypothesis:(id)arg7 error:(id*)arg8;
- (id)runChangeDetectionWithEvents:(id)arg1 test:(id)arg2 lastRun:(id)arg3;
- (id)runZTestBinomialProportionsTimeseriesWithSamples:(id)arg1 sampleTimestamps:(id)arg2 chunkMethod:(id)arg3 minimumSampleSize:(id)arg4 lastTimestampPreviousTest:(id)arg5 significanceLevel:(id)arg6 error:(id*)arg7;
- (id)underlyingObject;

@end
