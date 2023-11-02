
@interface CHSWidgetMetricsSpecification : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary * _alternatesByFamily;
    NSDictionary * _metricsByFamily;
}

@property (nonatomic, readonly, copy) NSDictionary *alternatesByFamily;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long families;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *metricsByFamily;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMetricsByFamily:(id)arg1 alternates:(id)arg2;
- (id)alternateMetricsForFamily:(long long)arg1;
- (id)alternatesByFamily;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)families;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetricsSpecification:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metricsByFamily;
- (id)metricsForFamily:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
