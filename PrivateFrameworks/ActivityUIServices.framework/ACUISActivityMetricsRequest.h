
@interface ACUISActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices22ActivityMetricsRequest * _metricsRequest;
}

@property (nonatomic, copy) ACUISActivityItemMetricsRequest *ambientMetrics;
@property (nonatomic, copy) ACUISActivityItemMetricsRequest *lockScreenMetrics;
@property (nonatomic, copy) ACUISSystemApertureMetricsRequest *systemApertureMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_ACUISItemMetricsRequestFromRequest:(id)arg1;
- (id)_activityMetricsRequest;
- (id)_initWithMetricsRequest:(id)arg1;
- (id)ambientMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockScreenMetrics:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lockScreenMetrics;
- (void)setAmbientMetrics:(id)arg1;
- (void)setLockScreenMetrics:(id)arg1;
- (void)setSystemApertureMetrics:(id)arg1;
- (id)systemApertureMetrics;

@end
