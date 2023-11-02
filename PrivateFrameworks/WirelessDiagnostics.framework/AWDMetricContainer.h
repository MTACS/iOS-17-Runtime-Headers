
@interface AWDMetricContainer : NSObject {
    PBCodable * _metric;
    unsigned int  _metricId;
}

@property (nonatomic, retain) PBCodable *metric;
@property (nonatomic, readonly) unsigned int metricId;

- (void).cxx_destruct;
- (id)metric;
- (unsigned int)metricId;
- (void)setMetric:(id)arg1;

@end
