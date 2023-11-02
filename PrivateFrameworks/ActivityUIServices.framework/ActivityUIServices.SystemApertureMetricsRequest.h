
@interface ActivityUIServices.SystemApertureMetricsRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    void _compactLeadingMetricsRequest;
    void _compactTrailingMetricsRequest;
    void _expandedMetricsRequest;
    void _minimalMetricsRequest;
    void obstructionSize;
    void obstructionTopMargin;
}

@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *expandedMetricsRequest;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *minimalMetricsRequest;
@property (nonatomic) struct CGSize { double x1; double x2; } obstructionSize;
@property (nonatomic) double obstructionTopMargin;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compactLeadingMetricsRequest;
- (id)compactTrailingMetricsRequest;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)expandedMetricsRequest;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObstructionSize:(struct CGSize { double x1; double x2; })arg1 expandedMetricsRequest:(id)arg2 compactLeadingMetricsRequest:(id)arg3 compactTrailingMetricsRequest:(id)arg4 minimalMetricsRequest:(id)arg5;
- (id)initWithObstructionSize:(struct CGSize { double x1; double x2; })arg1 obstructionTopMargin:(double)arg2 expandedMetricsRequest:(id)arg3 compactLeadingMetricsRequest:(id)arg4 compactTrailingMetricsRequest:(id)arg5 minimalMetricsRequest:(id)arg6;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)minimalMetricsRequest;
- (struct CGSize { double x1; double x2; })obstructionSize;
- (double)obstructionTopMargin;
- (void)setCompactLeadingMetricsRequest:(id)arg1;
- (void)setCompactTrailingMetricsRequest:(id)arg1;
- (void)setExpandedMetricsRequest:(id)arg1;
- (void)setMinimalMetricsRequest:(id)arg1;
- (void)setObstructionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setObstructionTopMargin:(double)arg1;

@end
