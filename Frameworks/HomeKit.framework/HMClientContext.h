
@interface HMClientContext : NSObject <NSCopying, NSMutableCopying> {
    NSString * _metricIdentifier;
}

@property (nonatomic, retain) NSString *metricIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMetricIdentifier:(id)arg1;
- (id)metricIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setMetricIdentifier:(id)arg1;

@end
