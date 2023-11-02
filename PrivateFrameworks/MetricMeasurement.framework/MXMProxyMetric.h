
@interface MXMProxyMetric : MXMMetric {
    MXMMetric * __underlyingMetric;
}

@property (readonly, copy) MXMProbe *_remoteProbe;
@property (readonly, retain) MXMMetric *_underlyingMetric;
@property (readonly, copy) MXMMetric *metric;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_constructProbe;
- (id)_remoteProbe;
- (unsigned long long)_sampleMode;
- (bool)_shouldAlwaysWrapInProxy;
- (bool)_shouldConstructProbe;
- (bool)_shouldNeverWrapInProxy;
- (id)_underlyingMetric;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetric:(id)arg1;
- (id)metric;
- (bool)prepareWithOptions:(id)arg1 error:(id*)arg2;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (void)willStop;

@end
