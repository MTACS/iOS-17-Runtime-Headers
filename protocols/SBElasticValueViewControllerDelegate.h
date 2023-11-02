
@protocol SBElasticValueViewControllerDelegate <NSObject>

@required

- (bool)elasticValueViewControllerCanBePresented:(SBElasticValueViewController *)arg1 withReason:(out id*)arg2;
- (void)elasticValueViewControllerNeedsDismissal:(SBElasticValueViewController *)arg1;

@end
