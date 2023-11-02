
@protocol SBElasticValueDataSource <NSObject>

@required

- (bool)elasticValueViewController:(SBElasticValueViewController *)arg1 updateCurrentValue:(float)arg2;
- (float)elasticValueViewControllerCurrentValue:(SBElasticValueViewController *)arg1;

@end
