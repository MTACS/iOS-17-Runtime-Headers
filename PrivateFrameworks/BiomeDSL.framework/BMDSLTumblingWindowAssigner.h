
@interface BMDSLTumblingWindowAssigner : BMDSLWindowAssigner <BMDSLWindowAssigner> {
    BMDSLAggregator * _aggregator;
    double  _interval;
    NSArray * _timestampKeyPaths;
}

@property (nonatomic, retain) BMDSLAggregator *aggregator;
@property (nonatomic) double interval;
@property (nonatomic, copy) NSArray *timestampKeyPaths;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aggregator;
- (id)bpsWindowAssigner;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(double)arg1 timestampKeyPaths:(id)arg2 aggregator:(id)arg3;
- (id)initWithInterval:(double)arg1 timestampKeyPaths:(id)arg2 aggregator:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;
- (double)interval;
- (void)setAggregator:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setTimestampKeyPaths:(id)arg1;
- (id)timestampKeyPaths;

@end
