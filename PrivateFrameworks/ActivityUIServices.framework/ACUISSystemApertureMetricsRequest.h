
@interface ACUISSystemApertureMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices28SystemApertureMetricsRequest * _metricsRequest;
}

@property (nonatomic, copy) ACUISActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (nonatomic, copy) ACUISActivityItemMetricsRequest *compactMetricsRequest;
@property (nonatomic, copy) ACUISActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (nonatomic, copy) ACUISActivityItemMetricsRequest *expandedMetricsRequest;
@property (nonatomic, copy) ACUISActivityItemMetricsRequest *minimalMetricsRequest;
@property (nonatomic) struct CGSize { double x1; double x2; } obstructionSize;
@property (nonatomic) double obstructionTopMargin;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMetricsRequest:(id)arg1;
- (id)_systemApertureMetricsRequest;
- (id)compactLeadingMetricsRequest;
- (id)compactMetricsRequest;
- (id)compactTrailingMetricsRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expandedMetricsRequest;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObstructionSize:(struct CGSize { double x1; double x2; })arg1 expandedMetricsRequest:(id)arg2 compactLeadingMetricsRequest:(id)arg3 compactTrailingMetricsRequest:(id)arg4 minimalMetricsRequest:(id)arg5;
- (id)initWithObstructionSize:(struct CGSize { double x1; double x2; })arg1 expandedMetricsRequest:(id)arg2 compactMetricsRequest:(id)arg3 minimalMetricsRequest:(id)arg4;
- (id)initWithObstructionSize:(struct CGSize { double x1; double x2; })arg1 obstructionTopMargin:(double)arg2 expandedMetricsRequest:(id)arg3 compactLeadingMetricsRequest:(id)arg4 compactTrailingMetricsRequest:(id)arg5 minimalMetricsRequest:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)minimalMetricsRequest;
- (struct CGSize { double x1; double x2; })obstructionSize;
- (double)obstructionTopMargin;
- (void)setCompactLeadingMetricsRequest:(id)arg1;
- (void)setCompactMetricsRequest:(id)arg1;
- (void)setCompactTrailingMetricsRequest:(id)arg1;
- (void)setExpandedMetricsRequest:(id)arg1;
- (void)setMinimalMetricsRequest:(id)arg1;
- (void)setObstructionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setObstructionTopMargin:(double)arg1;

@end
