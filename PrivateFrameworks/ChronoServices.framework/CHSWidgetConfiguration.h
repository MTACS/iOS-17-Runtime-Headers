
@interface CHSWidgetConfiguration : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _containerDescriptors;
    CHSWidgetMetricsSpecification * _metricsSpecification;
    NSSet * _rateLimitPolicies;
}

@property (nonatomic, readonly, copy) NSArray *containerDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CHSWidgetMetricsSpecification *metricsSpecification;
@property (nonatomic, readonly, copy) NSSet *rateLimitPolicies;
@property (readonly) Class superclass;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithContainerDescriptors:(id)arg1 metricsSpecification:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metricsSpecification;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rateLimitPolicies;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
