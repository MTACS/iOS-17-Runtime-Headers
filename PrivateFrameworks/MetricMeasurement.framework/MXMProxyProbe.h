
@interface MXMProxyProbe : MXMProbe <NSSecureCoding> {
    MXMProxyMetric * _proxyMetric;
}

@property (readonly) MXMProxyMetric *proxyMetric;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxyMetric:(id)arg1;
- (id)proxyMetric;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)arg1 stopHandler:(id /* block */)arg2;

@end
