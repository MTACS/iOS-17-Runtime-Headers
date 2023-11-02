
@protocol SBElasticBrightnessDataSource <SBElasticValueDataSource>

@required

- (long long)elasticBrightnessViewControllerBrightnessRouteType:(SBElasticBrightnessViewController *)arg1;
- (void)elasticBrightnessViewControllerValueUpdatesDidEnd:(SBElasticBrightnessViewController *)arg1;
- (void)elasticBrightnessViewControllerValueUpdatesWillBegin:(SBElasticBrightnessViewController *)arg1;

@end
