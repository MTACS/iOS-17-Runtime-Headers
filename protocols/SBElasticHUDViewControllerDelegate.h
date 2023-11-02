
@protocol SBElasticHUDViewControllerDelegate <NSObject>

@required

- (bool)elasticHUDViewControllerCanBePresented:(SBElasticHUDViewController *)arg1 withReason:(out id*)arg2;
- (void)elasticHUDViewControllerRequestsDismissal:(SBElasticHUDViewController *)arg1;

@end
