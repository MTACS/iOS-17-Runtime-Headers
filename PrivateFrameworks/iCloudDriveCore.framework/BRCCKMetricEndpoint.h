
@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSession * _session;
}

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1;
- (void)submitEventMetric:(id)arg1;

@end
