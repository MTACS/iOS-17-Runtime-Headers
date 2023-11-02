
@protocol CHSWidgetConfigurationHost <NSObject, NSCopying>

@required

- (NSString *)identifier;
- (NSArray *)widgetConfigurations;
- (NSArray *)widgetConfigurationsForApplicationContainerBundleIdentifier:(NSString *)arg1;

@end
