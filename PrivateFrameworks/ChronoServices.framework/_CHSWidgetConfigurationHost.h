
@interface _CHSWidgetConfigurationHost : NSObject <CHSWidgetConfigurationHost_Internal> {
    NSArray * _configurations;
    NSString * _identifier;
    CHSWidgetMetricsSpecification * _metricsSpecification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) CHSWidgetMetricsSpecification *metricsSpecification;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *widgetConfigurations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 configurations:(id)arg2 metricsSpecification:(id)arg3;
- (id)metricsSpecification;
- (id)widgetConfigurations;
- (id)widgetConfigurationsForApplicationContainerBundleIdentifier:(id)arg1;

@end
