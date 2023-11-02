
@interface MXMSampleTimeSeries : MXMSampleSet {
    MXMSampleTimeSeries * _time;
}

- (void).cxx_destruct;
- (void)_appendAbsoluteTime:(unsigned long long)arg1;
- (id)init;
- (id)initWithAbsoluteTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2;
- (id)initWithContinuousTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2;
- (id)initWithTimeSeries:(double*)arg1 tag:(id)arg2 unit:(id)arg3 length:(unsigned long long)arg4;
- (id)timeIndex;

@end
