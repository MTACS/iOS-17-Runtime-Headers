
@interface MTObject : NSObject {
    MTMetricsKitTemplate * _metricsKit;
}

@property (nonatomic) MTMetricsKitTemplate *metricsKit;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)arg1;
- (id)metricsKit;
- (void)setMetricsKit:(id)arg1;

@end
