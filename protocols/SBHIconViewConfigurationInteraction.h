
@protocol SBHIconViewConfigurationInteraction <NSObject>

@required

- (void)beginConfiguration;
- (<NSCopying><NSSecureCoding> *)configuration;
- (<SBLeafIconDataSource> *)configuredDataSource;
- (<SBHIconViewConfigurationInteractionDelegate> *)delegate;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (void)popConfiguration;
- (void)setDelegate:(id <SBHIconViewConfigurationInteractionDelegate>)arg1;

@end
