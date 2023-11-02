
@protocol PKPassPersonalizationViewControllerDelegate <NSObject>

@required

- (void)passPersonalizationViewController:(PKPassPersonalizationViewController *)arg1 didFinishPersonalizingPass:(PKPass *)arg2 success:(bool)arg3;

@end
